#include <bangtal.h>

ObjectID startButton, endButton, nextButton, sonny, dybala, lingard, sshadow, dshadow, Lshadow;
SceneID scene, scene2;
TimerID timer;


void mousetCallback(ObjectID object, int x, int y, MouseAction action) {
	if (object == endButton) {
		endGame();
	}
	else if (object == startButton) {
		hideObject(startButton);
		hideObject(endButton);
		hideObject(nextButton);

		enterScene(scene2);
		startTimer(timer);
		showMessage("45초 안에 어떤 선수들인지 맞춰보세요(선수들의 시그니처 세레머니입니다)");

		sshadow = createObject("sshadow.png");
		locateObject(sshadow, scene2, 100, 300);
		showObject(sshadow);

		dshadow = createObject("dshadow.png");
		locateObject(dshadow, scene2, 600, 300);
		showObject(dshadow);

		Lshadow = createObject("Lshadow.png");
		locateObject(Lshadow, scene2, 1000, 300);
		showObject(Lshadow);
	}
}

void timerCallback(TimerID timer) {
	if (timer == timer) {
		sonny = createObject("sonny.png");
		locateObject(sonny, scene2, 100, 300);
		showObject(sonny);

		dybala = createObject("dybala.png");
		locateObject(dybala, scene2, 600, 300);
		showObject(dybala);

		lingard = createObject("lingard.png");
		locateObject(lingard, scene2, 1000, 300);
		showObject(lingard);


		showMessage("정답 : 손흥민 디발라 린가드");
	}
}




int main()
{
	setGameOption(GameOption::GAME_OPTION_ROOM_TITLE, false);
	setGameOption(GameOption::GAME_OPTION_MESSAGE_BOX_BUTTON, false);
	setGameOption(GameOption::GAME_OPTION_INVENTORY_BUTTON, false);



	scene = createScene("scene", "bbgd.png");
	scene2 = createScene("scene2", "white.png");


	setMouseCallback(mousetCallback);
	setTimerCallback(timerCallback);

	startButton = createObject("start.png");
	locateObject(startButton, scene, 780, 360);
	showObject(startButton);

	endButton = createObject("end.png");
	locateObject(endButton, scene, 780, 315);
	showObject(endButton);

	sshadow = createObject("sshadow.png");
	locateObject(sshadow, scene2, 100, 300);
	showObject(sshadow);

	dshadow = createObject("dshadow.png");
	locateObject(dshadow, scene2, 600, 300);
	showObject(dshadow);

	Lshadow = createObject("Lshadow.png");
	locateObject(Lshadow, scene2, 1000, 300);
	showObject(Lshadow);

	timer = createTimer(45.0f); 
	showTimer(timer);

	sonny = createObject("sonny.png");
	locateObject(sonny, scene2, 100, 300);
	showObject(sonny);

	dybala = createObject("dybala.png");
	locateObject(dybala, scene2, 600, 300);
	showObject(dybala);

	lingard = createObject("lingard.png");
	locateObject(lingard, scene2, 1000, 300);
	showObject(lingard);
	startGame(scene);

}



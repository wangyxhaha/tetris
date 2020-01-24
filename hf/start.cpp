/*
* made by wangyxhaha
* using EGE
*/

void start_ani(){
	setbkcolor(BLACK);
	setcolor(WHITE);
	setfont(100,70,"ZV Weirdo");
	xyprintf(110,270,"tetris");
	Sleep(1000);
	for (int i=0;i<7;i++){
		cleardevice();
		setcolor(color[i]);
		xyprintf(110,270,"tetris");
		Sleep(100);
	}
	return;
}


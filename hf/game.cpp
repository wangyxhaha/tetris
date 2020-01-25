/*
* made by wangyxhaha
* using EGE
*/

#include "draw.cpp"

int gamem[10][20]; //0 nothing;1 I;2 J;3 L;4 O;5 S;6 T;7 Z

void game(){
	randomize();
	int now_kind,now_di,now_x,now_y,next_kind;
	memset(gamem,0,sizeof(gamem));
	showmouse(0);
	cleardevice();
	for (int time=0;is_run();delay_fps(5),time++){
		cleardevice();
		draw_bk();
		if (keystate(VK_LEFT));
		if (keystate(VK_RIGHT));
		if (keystate(VK_UP));
		if (keystate(VK_DOWN));
	}
	return;
}


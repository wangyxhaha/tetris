/*
* made by wangyxhaha
* using EGE
*/

int gamem[10][20]; //0 nothing;1 I;2 J;3 L;4 O;5 S;6 T;7 Z

struct blocks{
	int x,y;
}
I[4]={{-1,0},{0,0},{1,0},{2,0}},
J[4]={{-1,-1},{-1,0},{0,0},{1,0}},
L[4]={{-1,0},{0,0},{1,0},{1,-1}},
O[4]={{0,0},{1,0},{0,1},{1,1}},
S[4]={{0,-1},{0,0},{1,0},{1,1}},
T[4]={{0,-1},{-1,0},{0,0},{1,0}},
Z[4]={{1,-1},{0,0},{1,0},{0,1}};

#include "draw.cpp"

bool if_touch_wall(int x,int y){
	;
}

bool if_touch_blocks(int x,int y){
	;
}

bool if_not_touch(int x,int y){
	return !(if_touch_wall(x,y) || if_touch_blocks(x,y));
}

void game_start_ani(){
	setfont(100,100,tfont);
	setcolor(WHITE);
	setbkmode(TRANSPARENT); 
	for (int i=3;i>0;i--,Sleep(1000)){ //print 3 time:3,2,1
		cleardevice();
		draw_bk();
		xyprintf(270,270,"%d",i);
	}
	cleardevice();
	draw_bk();
	xyprintf(220,240,"GO"); //print GO
	Sleep(500);
	return;
}

void game(){
	game_start_ani();
	randomize();
	int now_kind=random(7)+1,now_di,next_kind=random(7)+1;
	memset(gamem,0,sizeof(gamem));
	showmouse(0);
	cleardevice();
	for (int time=0;is_run();delay_fps(5),time++){
		cleardevice();
		draw_bk();
		// draw_game_block();
		// draw_next_block();
		if (keystate(VK_LEFT)){
			;
		}
		if (keystate(VK_RIGHT)){
			;
		}
		if (keystate(VK_UP));
		if (keystate(VK_DOWN));
		if (time==5){
			time=0;
		}
	}
	return;
}


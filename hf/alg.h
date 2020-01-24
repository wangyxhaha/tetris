/*
* made by wangyxhaha
* using EGE
*/

#define start "tetris-start"
#define menu "tetris-menu"
#define tfont "ZV Weirdo" //ture flie:ZV_Weirdo.TTF
#define gfont "Consolas"

using namespace std;

void my_init();
bool mouse_down();

int color[7]={EGERGB(0xff, 0x0, 0x0),  //I red
/*7 blocks*/  EGERGB(0xff, 0x0,0xff),  //J magenta
/*color*/	  EGERGB(0xff,0xff, 0x0),  //L yellow
			  EGERGB( 0x0,0xff,0xff),  //O cyan
			  EGERGB( 0x0, 0x0,0xff),  //S blue
			  EGERGB(0xa9,0xa9,0xa9),  //T lightgrey
			  EGERGB( 0x0,0xff, 0x0)}; //Z green

#include "start.cpp"
#include "menu.cpp"

void my_init(){
	setinitmode(0); //Remove EGE's opening animation
	return;
}

bool mouse_down(){
	mouse_msg mmsg;
	while (mousemsg()){
		mmsg=getmouse();
	}
	if (mmsg.is_down()) return 1;
	else return 0;
}

/*from other flie*/
extern void start_ani();
extern bool if_font();
extern bool menu_gui();

/*
* made by wangyxhaha
* using EGE
*/

/*macro*/
#define start "tetris-start"
#define menu "tetris-menu"
#define font "ZV Weirdo" //ture flie:ZV_Weirdo.TTF
/**/

int color[7]={EGERGB(0xff, 0x0, 0x0),  //I red
/*7 blocks*/  EGERGB(0xff, 0x0,0xff),  //J magenta
/*color*/	  EGERGB(0xff,0xff, 0x0),  //L yellow
			  EGERGB( 0x0,0xff,0xff),  //O cyan
			  EGERGB( 0x0, 0x0,0xff),  //S blue
			  EGERGB(0xa9,0xa9,0xa9),  //T lightgrey
			  EGERGB( 0x0,0xff, 0x0)}; //Z green

/*function*/
void my_init(){
	setinitmode(0); //Remove EGE's opening animation
	return;
}

void start_ani();
bool if_font();
/**/

#include "start.cpp"


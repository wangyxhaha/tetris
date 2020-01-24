/*
* made by wangyxhaha
* using EGE
* Compilation instructions required:
* "-lgraphics64 -lgdi32 -limm32 -lmsimg32 -lole32 -loleaut32 -lwinmm -luuid -mwindows"
*/
using namespace std;
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <graphics.h>
#include <windows.h>
#include "./hf/alg.h"
#define chx 640
#define chy 640

int main(){
	if(!if_font()){
		return 0;
	}
	my_init();
	initgraph(chx,chy); //create window
	/*start*/
	setcaption(start);
	start_ani();
	getch();
	closegraph(); //close window
	return 0;
}


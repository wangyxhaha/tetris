/*
* made by wangyxhaha
* using EGE
* Compilation instructions required:
* "-lgraphics64 -lgdi32 -limm32 -lmsimg32 -lole32 -loleaut32 -lwinmm -luuid -mwindows"
*/
#include <iostream>
#include <graphics.h>
#include <windows.h>
#include "./hf/alg.h"
#define chx 640
#define chy 640
using namespace std;

int main(){
	my_init();
	initgraph(chx,chy); //create window
	/*start*/
	setcaption(start);
	start_ani();
	getch();
	closegraph(); //close window
	return 0;
}


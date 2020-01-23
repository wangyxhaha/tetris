/*
* made by 王宇轩 
* 需要ege图形库 
* 需要编译指令
* "-lgraphics64 -lgdi32 -limm32 -lmsimg32 -lole32 -loleaut32 -lwinmm -luuid -mwindows"
*/
#include <iostream>
#include <graphics.h>
#include "./hf/alg.h"
#define chx 640
#define chy 640
using namespace std;

int main(){
	my_init();
	initgraph(chx,chy); //打开窗口 
	setcaption(menu);
	getch();
	closegraph(); //关闭窗口 
	return 0;
}


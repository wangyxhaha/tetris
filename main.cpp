/*
* made by ������ 
* ��Ҫegeͼ�ο� 
* ��Ҫ����ָ��
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
	initgraph(chx,chy); //�򿪴��� 
	setcaption(menu);
	getch();
	closegraph(); //�رմ��� 
}


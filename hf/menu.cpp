/*
* made by wangyxhaha
* using EGE
*/

bool menu_gui(){
	showmouse(1);
	cleardevice(); //clean screen
	setfontbkcolor(BLACK); //set font backgrund color -> black
	setcolor(WHITE); //set font color -> white
	setfont(100,70,tfont); //set font -> high=100,wide=70,font=ZV_Weirdo
	xyprintf(110,110,"tetris"); //print text
	int mx,my;
	setcolor(YELLOW); //set font color -> white
	setfont(50,35,gfont); //set font -> high=50,wide=35,font=Consolas
	for (;is_run();delay_fps(60)){
		mousepos(&mx,&my);
		if (mx>=231 && mx<=406 && my>=295 && my<=345){
			setfontbkcolor(WHITE);
			setcolor(BLACK);
			if(mouse_down()){
				return 1;
			}
		}
		else{
			setfontbkcolor(BLACK);
			setcolor(YELLOW);
		}
		xyprintf(231,295,"start");
		if (mx>=250 && mx<=390 && my>=345 && my<=395){
			setfontbkcolor(WHITE);
			setcolor(BLACK);
			if (mouse_down()){
				return 0;
			}
		}
		else{
			setfontbkcolor(BLACK);
			setcolor(YELLOW);
		}
		xyprintf(250,345,"exit");
		cout << mx << ' ' << my << endl;
	}
	return 0;
}


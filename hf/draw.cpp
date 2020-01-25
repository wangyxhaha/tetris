/*
* made by wangyxhaha
* using EGE
*/

/*
game back from: x:100 y:120 to x:540 y:520
game blocks{each:20*20
            all:200*400
            from: x:100 y:120 to x:300 y:520
next blocks{each:33*33
			all:198*165
			from: x:340 y:120 to x:538 y:285
*/

void draw_bk(){
	setfillcolor(DARKGRAY);
	bar(100,120,300,520);
	bar(340,120,538,285);
	return;
}

//setfontbkcolor(BLACK); //set font and color
//setcolor(WHITE);
//setfont(100,70,gfont);


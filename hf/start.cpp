/*
* made by wangyxhaha
* using EGE
*/

using namespace std;

void start_ani(){ //start animation
	showmouse(0);
	setbkcolor(BLACK); //set background -> black
	setcolor(WHITE); //set font color -> white
	setfont(100,70,tfont); //set font -> high=100,wide=70,font=ZV_Weirdo
	xyprintf(110,270,"tetris"); //print text
	Sleep(1000); //1s
	for (int i=0;i<7;i++){ //seven color
		cleardevice(); //clean screen
		setcolor(color[i]);
		xyprintf(110,270,"tetris");
		Sleep(100); //0.1s
	}
	setcolor(WHITE);
	cleardevice();
	setfont(50,35,tfont);
	xyprintf(145,270,"made by");
	xyprintf(145,320,"wangyxhaha");
	Sleep(1000);
	showmouse(1);
	return;
}

bool if_font(){
	/*get user path*/
	string path=getenv("userprofile");
	for (int i=0;i<path.size();i++){
		if (path[i]=='\\'){
			path.insert(i,"\\");
			i++;
		}
	}
	/**/
	path+="\\AppData\\Local\\Microsoft\\Windows\\Fonts\\ZV_Weirdo.TTF"; //turn to font's path
	const char *cpath=path.c_str(); //turn to "const *char"
	/*try to open font flie*/
	ifstream ifont;
	ifont.open(cpath); //open font flie
	/**/
	if (ifont.good()){
		ifont.close();
		return 1;
	}
	else{
		MessageBox(NULL,"font error","ERROR",MB_OK);
		ifont.close();
		return 0;
	}
}


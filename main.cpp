﻿#include <iostream>
#include <cstdlib>//产生随机数用    rand()
#include <ctime>//产生随机数用  ，可以产生一个种子。
#include <conio.h>//getch使用的库
#include <cmath>
#include <iomanip>//setw()函数使用的库
//#include <windows.h>//

#include "moeneko.h"//函数声明

using namespace std;

/*/////////////////////////////////////////////////////////////////////////////
		
.			函数	名称：主函数main()
.					作用：程序入口。
.					输入值：五
.					类型：int
.					返回值：正确运行为“0”。

*//////////////////////////////////////////////////////////////////////////////
int main(){
	srand(time(0));//为后续的随机函数   设定随机数种子
	int a[4][4] = { 1,2,3,4,5,6,7,8,9,8,21,2,5,4,3,2 }, cycle;
	char wasd;
	cycle = 0;

	//初始化游戏数据   开始
	if (cycle == 0) {
		//putin(a, suiji(2, 3));
		//以下是测试用数据
		cycle++;
	}
	//初始化游戏数据   结束

	while (1){
		if (cycle != 1) {
			_getch();//清空键盘缓存区
		}
		if (gameover(a)) {
			displayout(a, 0);
			cout << endl;
			cout << "游戏结束，请按任意键退出" << endl;
			_getch();
			break;
		}
		//if (gameoverleft(a) == 1 && gameoverup(a) == 1) {//前者判断横向，后者判断纵向。
		//	displayout(a, 1);
		//	cout << endl;
		//	cout << "游戏结束，请按任意键退出" << endl;
		//	_getch();
		//	break;
		//}
		else {
			displayout(a, 1);
		}
		cout << endl << "请输入wasd代表方向" << endl;
		wasd = _getch();
		switch (wasd) {
		case ('w'):up(a); putin(a, 1); break;
		case ('a'):left(a); putin(a, 1); break;
		case ('s'):down(a);putin(a, 1); break;
		case ('d'):right(a);putin(a, 1); break;
		default:
			cout << "输入错误，请输入“w”“a”“s”“d”" << endl;
			_getch();
			break;
		}
		//system("pause");
		cycle++;
	}
	return 0;
}


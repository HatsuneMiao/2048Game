﻿#pragma once

//所有程序所需的库
#include <iostream>
#include <cstdlib>//产生随机数用    rand()
#include <ctime>//产生随机数用  ，可以产生一个种子。
#include <conio.h>//getch使用的库
#include <cmath>
#include <iomanip>//setw()函数使用的库
//#include <windows.h>//没什么用

//DISPLAY显示相关
/*/////////////////////////////////////////////////////////////////////////////

.			函数	名称：显示器 displayout()
.					作用：分行显示二维数组的内容。
.					输入值：1.需要输出的数组。		2.是否清空屏幕（0为清空）
.					类型：void
.					返回值：无。

*//////////////////////////////////////////////////////////////////////////////
void displayout(int a[][4], int score, int clean);

//PLAY游戏操作相关
/*/////////////////////////////////////////////////////////////////////////////

.			函数	名称：游戏步骤（上）   int up(int (*a)[4])
.					作用：计算向上运行的结果，并重新排序
.					输入值：1.需要计算的4*4的数组
.					类型：int
.					返回值：需要相加的分数。备注：会直接修改主函数里的数组。

*//////////////////////////////////////////////////////////////////////////////
int up(int(*a)[4]);
/*/////////////////////////////////////////////////////////////////////////////

.			函数	名称：游戏步骤（下）   int down(int (*a)[4])
.					作用：计算向下运行的结果，并重新排序
.					输入值：1.需要计算的4*4的数组
.					类型：int
.					返回值：需要相加的分数。备注：会直接修改主函数里的数组。

*//////////////////////////////////////////////////////////////////////////////
int down(int(*a)[4]);
/*/////////////////////////////////////////////////////////////////////////////

.			函数	名称：游戏步骤（左）   int left(int (*a)[4])
.					作用：计算向左运行的结果，并重新排序
.					输入值：1.需要计算的4*4的数组
.					类型：int
.					返回值：需要相加的分数。备注：会直接修改主函数里的数组。

*//////////////////////////////////////////////////////////////////////////////
int left(int(*a)[4]);
/*/////////////////////////////////////////////////////////////////////////////

.			函数	名称：游戏步骤（右）   int rigut(int (*a)[4])
.					作用：计算向右运行的结果，并重新排序
.					输入值：1.需要计算的4*4的数组
.					类型：int
.					返回值：需要相加的分数。备注：会直接修改主函数里的数组。

*//////////////////////////////////////////////////////////////////////////////
int right(int(*a)[4]);

//SWAP交换横纵相关
/*/////////////////////////////////////////////////////////////////////////////

.			函数	名称：纵横变换   void xtoy(int (*a)[4])
.					作用：将数组由纵向变为横向，颠倒位置
.					输入值：1.需要计算的4*4的数组
.					类型：void
.					返回值：无。备注：会直接修改主函数里的数组。

*//////////////////////////////////////////////////////////////////////////////
void xtoy(int(*a)[4]);
/*/////////////////////////////////////////////////////////////////////////////

.			函数	名称：横向变换   void xtox(int (*a)[4])
.					作用：将数组横向颠倒位置
.					输入值：1.需要计算的4*4的数组
.					类型：void
.					返回值：无。备注：会直接修改主函数里的数组。

*//////////////////////////////////////////////////////////////////////////////
void xtox(int(*a)[4]);
/*/////////////////////////////////////////////////////////////////////////////

.			函数	名称：纵向变换   void ytoy(int (*a)[4])
.					作用：将数组纵向颠倒位置
.					输入值：1.需要计算的4*4的数组
.					类型：void
.					返回值：无。备注：会直接修改主函数里的数组。

*//////////////////////////////////////////////////////////////////////////////
void ytoy(int(*a)[4]);

//RANDOM随机函数相关
/*/////////////////////////////////////////////////////////////////////////////

.			函数	名称：随机数产生器 suiji()
.					作用：随机数产生器。
.					输入值：给定一个上限值，或者给定上限下限值。
.					类型：int
.					返回值：给定范围的随机数。

*//////////////////////////////////////////////////////////////////////////////
int suiji(int b);
/*/////////////////////////////////////////////////////////////////////////////

.			函数	名称：随机数产生器 suiji()
.					作用：随机数产生器。
.					输入值：给定一个上限值，或者给定上限下限值。
.					类型：int
.					返回值：给定范围的随机数。

*//////////////////////////////////////////////////////////////////////////////
int suiji(int a, int b);
/*/////////////////////////////////////////////////////////////////////////////

.			函数	名称：二或四随机生成器 torf()	实际上是twoorfour的缩写
.					作用：随机生成  2  或者  4  。
.					输入值：无
.					类型：int
.					返回值：2或者4。

*//////////////////////////////////////////////////////////////////////////////
int torf();
/*/////////////////////////////////////////////////////////////////////////////

.			函数	名称：方格随机选择器   putin(int(*a)[4],int quantity)
.					作用：随机指定4*4区域内的一个方格，并且判断方格是否为空，如果为空，则输入2或者4
.					输入值：1.指定的4*4的方格		2.要指定输入的方格的数量
.					类型：void
.					返回值：无。

*//////////////////////////////////////////////////////////////////////////////
void putin(int(*a)[4], int quantity);

//GAMEOVER判断相关函数
/*/////////////////////////////////////////////////////////////////////////////

.			函数	名称：游戏失败判断器（横向）   bool gameoverleft(int(*a)[4])
.					作用：从横向的角度判断游戏是否结束
.					输入值：1.需要判断的4*4的数组
.					类型：bool
.					返回值：  0 = fause（游戏可以继续）     或      1 = ture（游戏失败）。

*//////////////////////////////////////////////////////////////////////////////
bool gameoverleft(int a[][4]);
/*/////////////////////////////////////////////////////////////////////////////

.			函数	名称：游戏失败判断器（纵向）   bool gameoverup(int(*a)[4])
.					作用：从纵向的角度判断游戏是否结束
.					输入值：1.需要判断的4*4的数组
.					类型：bool
.					返回值：  0（游戏可以继续）     或      1（游戏失败）。

*//////////////////////////////////////////////////////////////////////////////
bool gameoverup(int a[][4]);
/*/////////////////////////////////////////////////////////////////////////////

.			函数	名称：游戏空位检查器   bool vacancy(int a[][4])
.					作用：判断游戏中是否有空位。
.					输入值：1.需要判断的4*4的数组
.					类型：bool
.					返回值：  0 = fause（有空位）     或      1 = ture（没有空位）。

*//////////////////////////////////////////////////////////////////////////////
bool vacancy(int a[][4]);
/*/////////////////////////////////////////////////////////////////////////////

.			函数	名称：游戏结束主函数   bool gameover(int a[][4])
.					作用：判断游戏是否可以继续运行。
.					输入值：1.需要判断的4*4的数组
.					类型：bool
.					返回值：  0 = fause（游戏可以继续）     或      1 = ture（游戏失败）。

*//////////////////////////////////////////////////////////////////////////////
bool gameover(int a[][4]);

//SCORE分数相关
/*/////////////////////////////////////////////////////////////////////////////

.			函数	名称：分数计算器  int fun_score(int cycle, int add_score, int score)
.					作用：计算分数。
.					输入值：1.主程序运算次数      2.由play所导出的需要加的分数        3.原分数
.					类型：int
.					返回值：  score，分数。

*//////////////////////////////////////////////////////////////////////////////
int fun_score(int cycle, int add_score, int score);

//INPUT游戏输入按键相关
/*/////////////////////////////////////////////////////////////////////////////

.			函数	名称：游戏键入器   void game_input(int(*a)[4])
.					作用：判断游戏输入，并指向PLAY游戏相关函数
.					输入值：1.主函数的4*4的数组      2.循环次数cycle
.					类型：int
.					返回值：需要相加的分数。备注：会直接修改主函数里的数组。

*//////////////////////////////////////////////////////////////////////////////
int game_input(int(*a)[4], int cycle);
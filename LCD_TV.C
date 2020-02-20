#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gm,gd;
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	rectangle(10,100,500,300);
	rectangle(0,90,510,310);
	line(240,310,240,400);
	line(300,310,300,400);
	rectangle(150,402,400,450);
	getch();
	closegraph();
	}
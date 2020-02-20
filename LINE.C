#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gm,gd;
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	line(150,150,300,300);
	getch();
	closegraph();
	}
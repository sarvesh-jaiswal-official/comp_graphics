#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gm,gd;
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	rectangle(100,130,210,330);
	rectangle(110,140,200,310);
	rectangle(210,150,215,190);
	rectangle(210,200,215,218);
	circle(155,320,8);
	circle(155,135,3);
	getch();
	closegraph();
}
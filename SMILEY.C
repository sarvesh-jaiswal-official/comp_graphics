#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gm,gd;
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	circle(200,200,100);
	circle(150,170,20);
	circle(250,170,20);
	rectangle(150,260,270,240);
	line(195,225,210,175);
	line(195,225,225,225);
	line(210,175,225,225);
	getch();
	closegraph();
	}

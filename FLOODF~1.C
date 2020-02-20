#include "stdio.h"
#include "graphics.h"
#include "conio.h"
void flood(int,int,int,int);
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\BGI");
	rectangle(50,50,100,100);
	flood(51,51,11,0);
	getch();
	closegraph();
}
void flood(int x,int y,int new_color,int old_color)
{
	if(getpixel(x,y)==old_color)
	{
		putpixel(x,y,new_color);
		flood(x+1,y,new_color,old_color);
		flood(x-1,y,new_color,old_color);
		flood(x,y+1,new_color,old_color);
		flood(x,y-1,new_color,old_color);
	}
}
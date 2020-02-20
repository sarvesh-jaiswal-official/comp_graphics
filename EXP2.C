#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd=DETECT,gm;
	int x1,x2,y1,y2,dx,dy,steps,i;
	float xin,yin,x,y;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	printf("\n enter value of x1,y1:");
	scanf("%d%d",&x1,&y1);
	printf("\n enter value of x2,y2:");
	scanf("%d%d",(&x2,&y2));
	dx=(x2-x1);
	dy=(y2-y1);
	if (abs(dx)>abs(dy))
	{
		steps=abs(dx);
	}
	else
	{
		steps=(dy);
	}
	xin=abs(dx)/steps;
	yin=abs(dy)/steps;
	x=x1;
	y=y1;
	putpixel(x,y,RED);
	for (i=1;1<=steps;i++)
	{
		x=x+xin;
		y=y+yin;
		putpixel(x,y,RED);
	}
	getch();
	closegraph();
}


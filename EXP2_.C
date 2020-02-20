#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gm,gd;
	int dx,dy,x1,y1,x2,y2,e,i,x,y;
	clrscr();
	detectgraph(&gm,&gd);
	initgraph(&gm,&gd,"c:\\tc\\bgi");
	printf("\n enter x1,y1,x2,y2");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	dx=x2-x1;
	dy=y2-y1;
	x=x1;
	y=y1;
	e=(2*dy)-dx;
	for(i=1; i<=dx; i++)
	{
		putpixel(x,y,5);
		while(e>=0)
		{
			y=y+1;
			e=e-2*dy;
		}

	}
	getch();
	closegraph();

}
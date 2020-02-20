#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void main()
{
	int gm,gd,xc,yc,r,x,y,di;
	clrscr();
	printf("\n Enter the center point (xc,yc):");
	scanf("%d %d",&xc,&yc);
	printf("\n Enter Radius:");
	scanf("%d",&r);
	detectgraph(&gm,&gd);
	initgraph(&gm,&gd,"C:\\TC\\BGI");
	x=0;
	y=r;
	putpixel(xc+x,yc-y,1);
	di=3-(2*r);
	for(x=0;x<=y;x++)
	{
		if(di<0)
		{
			di=(di+(4*x)+6);
		}
		else
		{
			y=y-1;
			di=di+((4*(x-y)+10));
		}
	putpixel(xc+x,yc-y,7);
	putpixel(xc-x,yc-y,7);
	putpixel(xc+x,yc+y,7);
	putpixel(xc-x,yc+y,7);
	putpixel(xc+y,yc-x,7);
	putpixel(xc-y,yc-x,7);
	putpixel(xc+y,yc+x,7);
	putpixel(xc-y,yc+x,7);
	delay(10);
	}
	getch();
	closegraph();
}

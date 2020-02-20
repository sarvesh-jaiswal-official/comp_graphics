#include "stdio.h"
#include "conio.h"
#include "graphics.h"
void main()
{
	int gd=DETECT,gm;
	float sy;
	initgraph(&gd,&gm,"..\\BGI");
	clrscr();


	line(100,50,200,50);
	line(200,50,200,100);
	line(200,100,100,100);
	line(100,100,100,50);
	printf("Enter Shear factor along x-axis\n");
	scanf("%f",&sy);

	printf("Y-shear\n");
	setcolor(10);

	line(100,(50+(sy*100)),200,(50+(sy*200)));
	line(200,(50+(sy*200)),200,(100+(sy*200)));
	line(200,(100+(sy*200)),100,(100+(sy*100)));
	line(100,(100+(sy*100)),100,(50+(sy*100)));

	getch();
	closegraph();
}
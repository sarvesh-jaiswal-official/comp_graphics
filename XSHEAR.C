#include "stdio.h"
#include "conio.h"
#include "graphics.h"
void main()
{
	int gd=DETECT,gm;
	float sx;
	clrscr();
	initgraph(&gd,&gm,"..\\BGI");

	line(100,50,200,50);
	line(200,50,200,200);
	line(200,200,100,200);
	line(100,200,100,50);
	printf("Enter Shear factor along x-axis\n");
	scanf("%f",&sx);


	printf("X-shear\n");
	setcolor(10);


	line((100+(50*sx)),50,(200+(50*sx)),50);
	line((200+(50*sx)),50,(200+(200*sx)),200);
	line((200+(200*sx)),200,(100+(200*sx)),200);
	line((100+(200*sx)),200,(100+(50*sx)),50);
	 getch();
	closegraph();
}
#include "stdio.h"
#include "conio.h"
#include "graphics.h"
#include "math.h"
void main()
{
	int gd=DETECT,gm;
	int left,top,right,bottom;
	int l,t,r,b;
	int s;

	initgraph(&gd,&gm,"..\\BGI");
	printf("Enter left side of rectangle\n");
	scanf("%d",&left);
	printf("Enter top side of rectangle\n");
	scanf("%d",&top);
	printf("Enter right side of rectangle\n");
	scanf("%d",&right);
	printf("Enter bottom side of rectangle\n");
	scanf("%d",&bottom);
	printf("Before\n");
	rectangle(left,top,right,bottom);


	printf("Enter scaling factor\n");
	scanf("%d",&s);
	l=left*s;
	t=top*s;
	r=right*s;
	b=bottom*s;

	printf("%d %d %d %d",l,t,r,b);

	printf("After\n");
	rectangle(l,t,r,b);

	getch();
	closegraph();
}
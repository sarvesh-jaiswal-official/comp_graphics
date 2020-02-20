#include "stdio.h"
#include "conio.h"
#include "graphics.h"
#include "math.h"
void main()
{
	int gd=DETECT,gm;
	int x1,x2,x3,y1,y2,y3,xt,yt;
	int a1,a2,a3,b1,b2,b3;
	initgraph(&gd,&gm,"..\\BGI");
	printf("Enter first point of triangle");
	scanf("%d%d",&x1,&y1);
	printf("Enter second point of triangle\n");
	scanf("%d%d",&x2,&y2);
	printf("Enter third point of triangle\n");
	scanf("%d%d",&x3,&y3);

	printf("Before\n");
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x1,y1);

	printf("Enter sclaing factor\n");
	scanf("%d%d",&xt,&yt);
	a1=x1*xt;
	b1=y1*yt;
	a2=x2*xt;
	b2=y2*yt;
	a3=x3*xt;
	b3=y3*yt;

	printf("%d %d %d %d %d %d\n",a1,b1,a2,b2,a3,b3);

	printf("After\n");
	line(a1,b1,a2,b2);
	line(a2,b2,a3,b3);
	line(a3,b3,a1,b1);

	getch();
	closegraph();
}
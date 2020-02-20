#include "stdio.h"
#include "conio.h"
#include "graphics.h"
#include "math.h"
void main()
{
  int x1,x2,x3,y1,y2,y3;
  int x1n,x2n,x3n,y1n,y2n,y3n;
  float angle;
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"..\\BGI");

  printf("Enter x1 and y1\n" );
  scanf("%d %d",&x1,&y1 );
  printf("Enter x2 and y2\n" );
  scanf("%d %d",&x2,&y2 );
  printf("Enter x3 and y3\n" );
  scanf("%d %d",&x3,&y3 );

  line(x1,y1,x2,y2);
  line(x2,y2,x3,y3);
  line(x3,y3,x1,y1);

  printf("Enter angle of rotaion\n" );
  scanf("%f",&angle);


  angle=(angle*(3.14/180));
  x1n=abs(x1*cos(angle)-y1*sin(angle));
  y1n=abs(x1*sin(angle)+y1*cos(angle));
  x2n=abs(x2*cos(angle)-y2*sin(angle));
  y2n=abs(x2*sin(angle)+y2*cos(angle));
  x3n=abs(x3*cos(angle)-y3*sin(angle));
  y3n=abs(x3*sin(angle)+y3*cos(angle));

  line(x1n,y1n,x2n,y2n);
  line(x2n,y2n,x3n,y3n);
  line(x3n,y3n,x1n,y1n);

  getch();
  closegraph();
}

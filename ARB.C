#include "stdio.h"
#include "conio.h"
#include "graphics.h"
#include "math.h"
void main()
{
  float x1,y1,x2,y2;/*line points*/
  float xa,ya,x1a,y1a;/*arbitary points*/
  float x1d,y1d,x2d,y2d;/*trans points*/
  float a,ax;/*angle for rotation and calc*/
  float x1d1,y1d1,x2d2,y2d2;/*rotation points*/
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"..\\BGI");

  setviewport(300,225,300,300,0);
 line(0,0,400,0);
  line(0,0,0,400);
  line(0,-400,0,0);
  line(-400,0,0,0);
  printf("Enter end points x1 y1 and x2 y2\n" );
  scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
  setcolor(4);
  line(x1,y1,x2,y2);
  getch();
  printf("Enter arbitary point\n" );
  scanf("%f %f",&xa,&ya);
  x1d=x1-xa;/*translated points at arbitary point*/
  y1d=y1-ya;
  x2d=x2-xa;
  y2d=y2-ya;
  setcolor(5);
  line(x1d,y1d,x2d,y2d);
  getch();
  printf("Enter angel for rotation\n" );
  scanf("%f",&a);
  ax=(a*3.14)/180;
  x1d1=abs(x1d*cos(ax)-y1d*sin(ax));
  y1d1=abs(x1d*sin(ax)+y1d*cos(ax));
  x2d2=abs(x2d*cos(ax)-y2d*sin(ax));
  y2d2=abs(x2d*sin(ax)+y2d*cos(ax));
  setcolor(8);
  line(x1d1,y1d1,x2d2,y2d2);
  getch();
  x1d=x1d1+xa;
  y1d=y1d1+ya;
  x2d=x2d2+xa;
  y2d=y2d2+ya;
  setcolor(10);
  line(x1d,y1d,x2d,y2d);
  getch();
  closegraph();
}

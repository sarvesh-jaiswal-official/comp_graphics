#include "stdio.h"
#include "conio.h"
#include "graphics.h"
typedef struct co_od
{
  int x,y;
  int code[4];
}Pt;
void draw_window();
void draw_line(Pt p1,Pt p2,int cl);
Pt setcode(Pt p);
int visibility(Pt p1,Pt p2);;
Pt resetendpt(Pt p1,Pt p2);
void main()
{
  int gd=DETECT,gm,v;
  Pt p1,p2,ptemp;
  initgraph(&gd,&gm,"..\\BGI");
  printf("Enter end-pint 1(x and y)\n" );
  scanf("%d %d",&p1.x,&p1.y );
  printf("Enter end-pint 2(x and y)\n" );
  scanf("%d %d",&p2.x,&p2.y );
  cleardevice();
  draw_window();
  getch();
  draw_line(p1,p2,15);
  getch();
  p1=setcode(p1);
  p2=setcode(p2);
  v=visibility(p1,p2);
  switch(v)
  {
    case 0:
      cleardevice();
      draw_window();
      draw_line(p1,p2,15);
      break;
    case 1:
      cleardevice();
      draw_window();
      break;
    case 2:
      cleardevice();
      p1=resetendpt(p1,p2);
      p2=resetendpt(p2,p1);
      draw_window();
      draw_line(p1,p2,15);
      break;
  }
  getch();
  closegraph();
}
/*function to draw window*/
void draw_window()
{
  setcolor(RED);
  line(150,100,450,100);
  line(450,100,450,350);
  line(450,350,150,350);
  line(150,350,150,100);
}
/*function to draw line between two points*/
void draw_line(Pt p1,Pt p2,int cl)
{
  setcolor(cl);
  line(p1.x,p1.y,p2.x,p2.y);
}
/*function to set code of co_od*/
Pt setcode(Pt p)
{
  Pt ptemp;
  if(p.y<100)
  {
    ptemp.code[0]=1;/*top*/
  }
  else
  {
    ptemp.code[0]=0;
  }
  if(p.y>350)
  {
    ptemp.code[1]=1;/*bottom*/
  }
  else
  {
    ptemp.code[1]=0;
  }
  if(p.x>450)/*right*/
  {
    ptemp.code[2]=1;
  }
  else
  {
    ptemp.code[2]=0;
  }
  if(p.x<150)/*left*/
  {
    ptemp.code[3]=1;
  }
  else
  {
    ptemp.code[3]=0;
  }
  ptemp.x=p.x;
  ptemp.y=p.y;
  return ptemp;
}
/*sunction to determine visibility of line*/
int visibility(Pt p1,Pt p2)
{
  int i,flag=0;
  for(i = 0;i < 4;i++)
  {
    if((p1.code[i]!=0) || (p2.code[i]!=0))
    {
      flag=1;
    }
  }
  if(flag==0)
  {
    return 0;
  }
  for(i = 0;i < 4;i++)
  {
    if((p1.code[i]==p2.code[i]) && p2.code[i]==1)
    {
      flag=0;
    }
  }
  if(flag==0)

    return (1);

  return (2);

}
/*function to find new end points*/
Pt resetendpt(Pt p1,Pt p2)
{
  Pt temp;
  int x,y,i;
  float m,k;
  if(p1.code[3]==1)/*cutting left edge*/
  {
    x=150;
  }
  if(p1.code[2]==1)/*cutting right edge*/
  {
    x=450;
  }
  if((p1.code[3]==1) || (p1.code[2]==1))
  {
    m=(float)(p2.y-p1.y)/(p2.x-p1.x);
    k=(p1.y+(m*(x-p1.x)));
    temp.y=k;
    temp.x=x;
    for(i = 0;i < 4;i++ )
    {
      temp.code[i]=p1.code[i];
    }
    if(temp.y <= 350 && temp.y >= 100)
    {
      return temp;
    }
  }
  if (p1.code[0]==1)/*cutting top*/
  {
    y=100;
  }
  if(p1.code[1]==1)/*cutting bottom*/
  {
    y=350;
  }
  if(p1.code[0]==1 || p1.code[1]==1)
  {
    m=(float)(p2.y-p1.y)/(p2.x-p1.x);
    k=(float)p1.x + (float)(y-p1.y)/m;
    temp.x=k;
    temp.y=y;
    for(i = 0;i < 4;i++)
    {
      temp.code[i]=p1.code[i];
    }
    return temp;
  }
  else return p1;
}

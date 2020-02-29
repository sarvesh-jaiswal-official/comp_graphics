#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

class pixel
{
   
public:
    int x1,y1,x2,y2,dx,dy,len;
};

class dda : public pixel
{
  public :
  void draw(int n)
{
   
  cout<<"\n Enter value of x1:";
  cin>>x1;

  cout<<"\n Enter value of y1:";
  cin>>y1;
  
  cout<<"\n Enter value of x2:";
  cin>>x2;

  cout<<"\n Enter value of y2:";
  cin>>y2;
 int gd=DETECT,gm=VGAMAX;
 initgraph(&gd,&gm,NULL);
  int x,y,s,i=1;

  dx=abs(x2-x1);
  dy=abs(y2-y1);

  if(dx>=dy)
  len=dx;
  else
  len=dy;

   
  dx=(x2-x1)/len;
  dy=(y2-y1)/len;

  putpixel(abs(x1),abs(y1),n);

  if(dx>=0)
  s=1;
  else
  s=-1;

  x=x1+0.5*s;
  y=y1+0.5*s;
  
   
  putpixel(x,y,15);
   

  while(i<=len)
  {
    x=x+dx;
    y=y+dy;
    putpixel(x,y,15);
    i=i+1;
    delay(50);
  }
 //delay(50);
closegraph();
}
   
};


class Bresen: public pixel
{
  public:

  void draw()
 {
   int gd=DETECT,gm=VGAMAX;
   cout<<"\n Enter value of x1:";
   cin>>x1;

   cout<<"\n Enter value of y1:";
   cin>>y1;
  
   cout<<"\n Enter value of x2:";
   cin>>x2;

   cout<<"\n Enter value of y2:";
   cin>>y2;
 
    
   initgraph(&gd,&gm,NULL);
   int x,y,s1,s2,e,i=1;

   dx=abs(x2-x1);
   dy=abs(y2-y1);
  
   x=x1;
   y=y1;
   putpixel(abs(x),abs(y),15);
  
   if(dx>0)
   s1=1;
   else
   s1=-1;

   if(dy>0)
   s2=1;
   else
   s2=-1;

   int temp;
   if(dy>dx)
 {
    e=1;
    temp=dx;
    dx=dy;
    dy=temp;
 }
   else
   {
   e=0;

   e=2*dy-dx;

   for(i=1;i<=dx;i++)
   { 
 
   while(e>=0)
  {
    if(e=1)
    x=x+s1;
    else
    y=y+s2;
    e=e-2*dx;
  }
   
  if(e=1)
  y=y+s2;
  else
  x=x+s1;  
  e=e+2*dy;
  
  delay(50);
  putpixel(x,y,15);
 }
 }
closegraph();
}
};


int main()
{
 dda d;
 Bresen b;
 int  ch;

do
{
cout<<"\n***LINE DRAWING ALGORITHM***";
cout<<"\n\n MENU:";

cout<<"\n1.DDA";
cout<<"\n2.Bresenhams";
cout<<"\n3.Exit";
cout<<"\n Enter your choice:";
cin>>ch;

switch(ch)
{
case 1: d.draw(15);
        break;

case 2: b.draw();
        break;

case 3: exit(0);
       
}
}
while(ch!=3);


return 0;
}


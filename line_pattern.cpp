#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
int dotd=0;
class pixel
{

  public:
    int x1,y1,x2,y2,dx,dy,len;
};

class dda : public pixel
{
  public :

  void draw1(int p,int q,int t)
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

  putpixel(abs(x1),abs(y1),15);

  if(dx>=0)
  s=1;
  else
  s=-1;

  x=x1+0.5*s;
  y=y1+0.5*s;


  putpixel(x,y,15);

  int dot=0;
  for(i=1;i<=len;i++,dot++)
  {
    x=x+dx;
    y=y+dy;

   if(dot>p && p!=0 )
   {
	   if(dotd==1)
	   {
		   if(dot<p+q)
		   { 
		   
		   }
		   else if(dot==p+q+1)
		   {
			   putpixel(x,y,15);
		   }
		   else if(dot>=p+2*q)
		   	   {
			   	if(dot==p+2*q)
			   	{
				   dot=0;
			        }
		   	   }
	  }
	   else if(dot==p+q && dotd==0)
     		{
       			dot=0;
     		}
   }
   else
   {
    putpixel(x,y,15);

   }
   if(t==1)
      {
        putpixel(x+2,y+1,15);
      }
	delay(30);
  }
  delay(10000);
  closegraph();

}

};


int main()
{
 dda d;
 
 int  ch,c1,c2,p=0,q=0;

do
{
cout<<"\n***LINE Patterns***";
cout<<"\n\n MENU:";

cout<<"\n1.DDA";
cout<<"\n2.Exit";
cout<<"\n Enter your choice:";
cin>>ch;

int t;

switch(ch)
{
case 1:
    do{
      cout<<"\n 1.Solid line";
      cout<<"\n 2.Dotted line";
      cout<<"\n 3.Dashesd line";
      cout<<"\n 4.Dash-dot line";
      cout<<"\n 5.Thick line";

      cout<<"\n Enter your choice:";
      cin>>c1;

      switch(c1)
     {
    case 1:
           t=0;
           p=q=0;
           d.draw1(0,0,t);
           break;

   case 2:
           cout<<"\n Enter number of pixels to draw:";
           cin>>p;
           cout<<"\n Enter number of pixels to skip:";
           cin>>q;
           t=0;
           d.draw1(p,q,t);
           break;

   case 3:
           cout<<"\n Enter number of pixels to draw:";
           cin>>p;
           cout<<"\n Enter number of pixels to skip:";
           cin>>q;
           t=0;
           d.draw1(p,q,t);
           break;

   case 4:
           cout<<"\n Enter number of pixels to draw:";
           cin>>p;
           cout<<"\n Enter number of pixels to skip:";
           cin>>q;
           t=0;
           dotd=1;
           d.draw1(p,q,t);
           dotd=0;
           break;

  case 5:
           t=1;
           p=q=0;
           d.draw1(p,q,t);
           break;
      }
           cout<<"\n Enter your choice:";
           cin>>c1;

}
while(c1!=5);
    break;


case 2: exit(0);
        break;
}

}
while(ch!=2);


return 0;

}
/****LINE Patterns***

 MENU:
1.DDA
2.Bresenhams
3.Exit
 Enter your choice:1

 1.Solid line
 2.Dotted line
 3.Dashesd line
 4.Dash-dot line
 5.Thick line
 Enter your choice:1

 Enter value of x1:100

 Enter value of y1:100

 Enter value of x2:200

 Enter value of y2:200
  1.Solid line
 2.Dotted line
 3.Dashesd line
 4.Dash-dot line
 5.Thick line
 Enter your choice:2

 Enter number of pixels to draw:2

 Enter number of pixels to skip:2

 Enter value of x1:100

 Enter value of y1:100

 Enter value of x2:200

 Enter value of y2:200
 1.Solid line
 2.Dotted line
 3.Dashesd line
 4.Dash-dot line
 5.Thick line
 Enter your choice:3

 Enter number of pixels to draw:4

 Enter number of pixels to skip:2

 Enter value of x1:100

 Enter value of y1:100

 Enter value of x2:200

 Enter value of y2:200
 1.Solid line
 2.Dotted line
 3.Dashesd line
 4.Dash-dot line
 5.Thick line
 Enter your choice:4

 Enter number of pixels to draw:5

 Enter number of pixels to skip:2

 Enter value of x1:100

 Enter value of y1:100

 Enter value of x2:200

 Enter value of y2:200
 *
 *
 * */


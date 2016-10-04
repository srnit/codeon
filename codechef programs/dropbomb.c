/*  demo.c*/
#include<stdio.h>
#include<graphics.h> 
#include<math.h>
int main()
{
   int gd = DETECT,gm;
   float x1=100,y1=300,x,y,r=10,r2=3,ang=45.0,x2,y2,x3;
   float v=60,t=0,p;
  
   scanf("%f",&v);
   initgraph(&gd,&gm,NULL);
   
   int c;
    line(0,310,800,310);
   delay(3000);
   while(1)
   {  
      x=v*(t/1000)*cos(3.14*65/180);
      y=(v*sin(3.14*65/180)*(t/1000))-(5*t*t/1000000);
      
      x2=x1+(x);
      y2=y1-(y);
      
      cleardevice();
      setcolor(WHITE);
      line(0,310,800,310);
      setcolor(RED);
     // 
      circle(x2,y2,r);
      floodfill(x2,y2,RED);
      delay(10);
     

      t=t+100;

      if(y2>300)
         break;
   
   }
   outtextxy(x2,y2,"bombs");
   x=0;
   y=0;
   t=0;
   x1=x2;
   while(1)
   {  
      x=v*(t/10000)*cos(3.14*65/180);
      y=(v*sin(3.14*65/180)*(t/10000))-(5*t*t/10000000);
      
      x2=x1+(x);
      y2=y1-(y);
      x3=x1-x;
      cleardevice();
      setcolor(WHITE);
      line(0,310,800,310);
      setcolor(RED);
     // 
      circle(x2,y2,r2);
      circle(x3,y2,r2);
      floodfill(x3,y2,RED);
      floodfill(x2,y2,RED);
      delay(10);
     

      t=t+100;

      if(y2>300)
         break;
   
   }


   delay(5000);
   closegraph();
   
   return 0;
}

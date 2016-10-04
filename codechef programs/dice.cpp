#include <stdio.h>
#include <graphics.h>
#include <time.h> 
int main(){

	int n,x,a[6]={0},i;
	
	scanf("%d",&n);
	while(n--)
	{	x=((rand())%6)+1;
		//printf("%d\n",x);
		a[x-1]++;
	}
	for(i=0;i<6;i++)
		printf("%d=%d\n",i+1,a[i]);
   

   int gd = DETECT,gm;
   initgraph(&gd, &gm, NULL);
 	

   	bar(50, 400-(a[0]*3), 100, 400);
   	outtextxy(60,410,"1");
   	outtextxy(160,420,""+a[0]);

   	bar(150, 400-(a[1]*3), 200, 400);
   	outtextxy(160,410,"2");
   		outtextxy(160,410,"2");

   	bar(250, 400-(a[2]*3), 300, 400);
   	outtextxy(260,410,"3");
   		outtextxy(160,410,"2");

   	bar(350, 400-(a[3]*3), 400, 400);
   	outtextxy(360,410,"4");
   		outtextxy(160,410,"2");

   	bar(450, 400-(a[4]*3), 500, 400);
   	outtextxy(460,410,"5");
   		outtextxy(160,410,"2");

   	bar(550, 400-(a[5]*3), 600, 400);
 	outtextxy(560,410,"6");
 		outtextxy(160,410,"2");

 	line(0,400,900,400);
   getch();
   closegraph();
   return 0;
}
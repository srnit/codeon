#include<stdio.h>
struct time1
{
	int hr;
	int min;
	int sec;
}b1,b2;
int main()
{
	int sec1,sec2,min1,t;
	printf("enter time in sec of first class1");
	scanf("%d/n",&sec1);
	b1.hr=sec1/3600;
	t=sec1%3600;
	b1.min=sec1/60;
	b1.sec=sec1%60;
	printf("class 1 at=%d:%d:%d",b1.hr,b1.min,b1.sec);
	printf("enter time in sec of first class2");
scanf("%d/n",&sec2);
b2.hr=sec2/3600;
	t=sec2%3600;
	b2.min=sec2/60;
	b2.sec=sec2%60;
	printf("class 1 at=%d:%d:%d/n",b2.hr,b2.min,b2.sec);
	if(b2.hr>b1.hr||b2.min>b1.min)
	{
		b2.hr=b2.hr+23;
		t=(b2.hr-b1.hr);
		min1=b2.min-b1.min;
		sec1=b2.sec-b1.sec;
		printf("time difference is=%d:%d:%d",t,min1,sec1);
	}
	else
		{
		b1.hr=b1.hr+23;
		t=(b1.hr-b2.hr);
		min1=b1.min-b2.min;
		sec1=b1.sec-b2.sec;
		printf("time difference is=%d:%d:%d",t,min1,sec1);
	}



	return 0;
}
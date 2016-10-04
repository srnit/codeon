#include<stdio.h>
void display(int *);
int main()
{
	int num[]={1,2,3,4,5,6},i;
	for(i=0;i<=7;i++)
	display(&num[i]);
	return 0;
	}
	void display(int *m)

	{
	printf("%d\n",*m);


	}

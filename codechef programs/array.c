#include<stdio.h>
int main()
{
	 int i,*j;

	int array[]={32,33,34,35,36,37};
	j=&array[0];
	for(i=0;i<=5;i++)
	{
	
	printf("%u\n",j);
	printf("%u\n",*j);
	j+=1;

	}
	return 0;
}
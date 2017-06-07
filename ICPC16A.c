#include <stdio.h>

int main()
{
	long long int t,x1,x2,y1,y2;

	scanf("%lld",&t);

	while(t--)
	{
		scanf("%lld %lld %lld %lld",&x1,&y1,&x2,&y2);

		if(x1==x2)
		{
			if(y1<y2)
			{
				printf("up\n");
			}
			else
				printf("down\n");
		}
		else if(y1==y2)
		{
			if(x1<x2)
			{
				printf("right\n");
			}
			else
				printf("left\n");
		}
		else
		{
			printf("sad\n");
		}
	}
}

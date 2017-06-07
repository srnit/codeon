#include <stdio.h>

int main()
{
	long long int t,d,s,a,i,a1;

	scanf("%lld",&t);

	while(t--)
	{
		scanf("%lld",&d);

		a=0;
		s=0;
		if(d%9==0)
			printf("1\n");
		else
		{
		//	printf("d=%lld\n",d );
			a=d%9;
			a1=0;
			s=0;
			//printf("i=%lld\n",a );
			for(i=a+1;i>0;)
			{
				s=i%10;
				a1=s+a1;
				i=i/10;
			}
			printf("%lld\n",a1);
		}
	}
}

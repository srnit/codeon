#include <bits/stdc++.h>

int main()
{
	long long int a,i,j,k,f0,f1,f2,f3,n,t;

	scanf("%lld",&t);

	while(t--)
	{
		scanf("%lld",&n);
		//printf("xx\n");
		f0=0;f1=0;f2=0;f3=0;

		if(n==1)
		{
			scanf("%lld",&a);
			printf("yes\n");
		}
		else
		{

			for(i=0;i<n;i++)
			{
				//printf("i=%lld\n",i );
				scanf("%lld",&a);

				if(a==0)
				{
					f0=1;
				}
				else if(a==1)
				{
					f1=1;
				}
				else if(a==-1)
				{
					f2=1;
				}
				else 
				{
					f3++;
				}
				
			}

			if(f2==1)
			{
				//printf("ssss\n");
				if(f3!=0)
					printf("no\n");
				else
				{
					if(f1==1)
						printf("yes\n");
					else
						printf("no\n");
				}
			}
			else
			{
				//printf("ccc\n");

				if(f0==1 && f1==1)
				{
					if(f3>1)
						printf("no\n");
					else
						printf("yes\n");
				}
				
				else if(f0==1 && f1==0)
				{
					if(f3>1)
						printf("no\n");
					else
						printf("yes\n");
				}
				else
				{
					
						if(f3>1)
						printf("no\n");
					else
						printf("yes\n");
				}


			}


		}
	}
}

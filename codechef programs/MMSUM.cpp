#include<stdio.h>
#include<assert.h>

int main()
{	long long int t,s,i,j,n,a[100000],k,z,l,p;
	scanf("%lld",&t);
	while(t)
	{	s=0;k=-10000000000;
		scanf("%ld",&n);
        assert(n>=2&&n<=100000);
		for(i=0;i<n;i++)
		{	scanf("%ld",&a[i]);
			if(a[i]>k)
			k=a[i];
			}
  
		for(i =1;i<n;i++)
			for(j=0;j<n-i;j++)
			{	s=0;
				p=0;
				for(l=j;l<=(i+j);l++)
				{	s=s+a[l];
				//	printf("%ld ",a[l] );
					if(a[l]<0 && a[l]<p ) 
						p=a[l];
					//printf("%ld ",a[l] );
				}
				s=s-p;
				if(s>=k)
					k=s;
				//printf("\n%ld %ld\n",k,p);
			}	
		printf("%ld\n",k);	
		t--;
	}

}

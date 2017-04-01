#include<bits/stdc++.h>
using namespace std;
 long long int numberofzero1(double prod)
{
	long long int zero,count;
	count=0;
	while(prod)
	{
		zero=(long long int )(prod)%10;
		if(zero==0)
			count++;
		else 
			break;
		prod/=10;


	}
	return count;
}
int main()
{
	long long int t,n,m,x,y,result,zeros,l,r,q;
	double prod;
	cin>>t;
	while(t--)
	{result=0;
		cin>>n>>m;
		long long int v[100000];
		for(long long int i=1;i<=n;i++)
			cin>>v[i];
		while(m--)
		{ prod=1.0;
			
			cin>>q;
			if(q==2)
			{
				cin>>l>>r>>y;
				for(long long int j=l;j<=r;j++)
				{
					v[j]= (j- l + 1) * y;
				}
			}
			else if(q==1)
			{
              cin>>l>>r>>x;
              for(long long int j=l;j<=r;j++)
              	v[j]=v[j]*x;
			}
			else if(q==3)
			{
				cin>>l>>r;
				for(long long int j=l;j<=r;j++)
				{
					prod*=v[j];
				}
				zeros=numberofzero1(prod);
				result+=zeros;
			}

		}
		cout<<result<<"\n";
	}
}
#include<bits/stdc++.h>
using namespace std;
void rosecost(long int a[],long int n,long int k,long long int mincost)
{
	mincost=0;
	long long int cost=0;
	long long int sum=0;
	long int num=n;
	sort(a,a+k);
	for(int i=k-1;i>=0;i--)
	{
		
		//cout<<a[i]<<"\n";
		
		if(a[i]>n)
			continue;
		sum=sum+a[i];
		n=n-sum;
		if(n>=0)
		mincost+=sum*10;

		
		if(num%a[i]==0)
		{
			cost=(num/a[i])*10;
			if( mincost>=cost)
			{
				mincost=cost;
               // break;
			}
			if(cost==10)
			{	mincost=10;
				break;
             
               }
		}
		
		



	}
cout<<mincost<<"\n";
}
int main()
{
	long int t,n,k;
	long long int mincost=0;
	long long int sum=0;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		long int a[k+1];
		for(int i=0;i<k;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		if(sum<n)
		{
			cout<<"-1\n";
		}
		else
		rosecost(a,n,k,mincost);
	}
}
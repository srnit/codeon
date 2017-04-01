#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	long long int sum;
	cin>>t;
	while(t--)
	{
		sum=0;
		cin>>n;
		if(n==1)
			cout<<"0"<<"\n";
		else
		{
		for(int i=2;i*i<=n;i++)
		{
			if(n%i==0)
				{if(n/i!=i)
				sum=sum+i+n/i;
				else
				 sum=sum+i;
				 	
			}
		}
		cout<<sum+1<<"\n";
	}
	}
}
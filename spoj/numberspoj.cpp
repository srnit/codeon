#include<bits/stdc++.h>
using namespace std;
int prime[10000008];
long long int result[10000008];
void pre()
{
	for(int i=2;i<10000008;i++)
	{
		if(!prime[i])
		{
			for(int j=2*i;j<=10000008;j+=i)
				if(!prime[j])
					prime[j]=i;
				result[i]=result[i-1]+i;

		}
		else
			result[i]=result[i-1]+prime[i];
	}
}
int main()
{
	pre();
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<result[n]<<"\n";
	}
}
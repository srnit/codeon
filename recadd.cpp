#include<bits/stdc++.h>
using namespace std;
long long int recadd(long long int n)
{
	if(n==0)
		return 0;
	else
		return (n+recadd(n-1));
}
int main()
{
	long long int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<recadd(n)<<"\n";
	}
}
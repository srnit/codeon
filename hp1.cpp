#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll gcd(ll a,ll b)
{
	if(b==0)
		return a;
	gcd(b,a%b);
}
int main()
{
	ll x,y,outcome=0;
	cin>>x>>y;
	ll result=gcd(x,y);
	//cout<<result<<"\n";
	for(ll i=1;i*i<result;i++)
	{
		if(result%i==0)
			outcome++;
	}
	cout<<outcome+1<<"\n";
}

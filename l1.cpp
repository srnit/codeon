#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t,mul,n,q,num;
	cin>>t;
	while(t--)
	{
		mul=1;
		cin>>n>>q;
		ll x;
		for(ll i=0;i<n;i++)
		{
			cin>>num;
			mul*=num;
		}
		for(ll i=0;i<q;i++)
		{
			cin>>x;
			cout<<x/mul<<" ";
		}
		cout<<"\n";
		
	}

}
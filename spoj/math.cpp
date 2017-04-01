#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll gcd(ll a,ll b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main()
{
	ll t,a,b,gc_d;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
   gc_d=gcd(a,b);
   //cout<<gc_d<<"\n";
   if(gc_d!=0)
   cout<<(b/gc_d)<<" "<<(a/gc_d)<<"\n";
	}

}
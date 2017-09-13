#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll powerfun( ll a,ll b)
{
	if(b==0)
		return 1;
	if(b%2==0)
		return powerfun(a*a,b/2);
	else
		return x*(powerfun(x*x,(n-1)/2));
}
ll eculdian(ll c ,ll m)
{
	ll d,x,y;
	if(m==0)
	{
		d=c;
		x=1;
		y=0;

	}
	else
	{
		eculdian(m,c%m);
		ll temp=x;
		y=x;
		x=temp-(c/m)%y;
	}

	return x;
}
ll modinverse(ll c,ll m)
{
	ll x;
	x=eculdian(c,m);
	return (x%m+m)%m;
}
int main(int argc, char const *argv[])
{
   cin>>a>>b>>c>>m;
   power=powerfun(a,b);
   modic=modinverse(c,m);
   cout<<(power*modic)%m<<"\n";
	return 0;
}
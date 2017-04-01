#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(b==0)
		return a;
	else
		gcd(b,a%b);
}
int main()
{
int t,a,b,c;
cin>>t;
for(int i=1;i<=t;i++)
{
	cin>>a>>b>>c;
	if(c%gcd(a,b)==0)
		cout<<"Case "<<i<<":"<<"Yes"<<"\n";
	else
		cout<<"Case "<<i<<":"<<"No"<<"\n";
}
});

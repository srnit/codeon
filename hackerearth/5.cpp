#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod1 1000000007
ll facto(ll num)
{
	ll fact=1;
	if(num==0)
		return 0;
  for(ll i=num; i>0; i--)
	{
		fact=((fact)%mod1*(i)%mod1)%mod1;
	}
	return fact;
}
int main()
{
	ll a,b,i,c,d,t,q;
	cin>>t;
	while(t--)
	{
	string str;
	cin>>str;
	ll result1=0;
	//int hash[27]={0};
   cin>>q;
   while(q--)
   {
	cin>>a>>b;
	char ch=char((a+b)/2);
	///char ch1=char(c+d)/2;
	ll count=0;
	//ll count2=0;
	//cout<<ch<<"\n";;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]==ch)
			count++;
		
	}

    result1=(result1%mod1+(facto(count))%mod1)%mod1;
	//ll result2=facto(count2);
	
}
cout<<result1<<"\n";
}
	
}
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
//#define 1000000007
int main()
{ ll t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector<ll>v;
		v.push_back(2);
		cout<<v[0]<<" ";
		for(int i=1;i<n;i++)
		{
			ll result=1;
         for(ll j=0;j<i;j++)
         {
         	result=((result)%1000000007*(v[j])%1000000007)%1000000007;
         }
         v[i]=(result+1)%1000000007;
         cout<<v[i]<<" ";
		}
		cout<<"\n";

	}
}
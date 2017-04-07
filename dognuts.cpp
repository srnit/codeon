#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int  t,c,k,w;
	cin>>t;
	while(t--)
	{
		cin>>c>>k>>w;
		if(c*w<=k)
			cout<<"yes"<<"\n";
		else
			cout<<"no\n";
	}
}
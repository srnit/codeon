#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{ ll q,a,b,sourc,destination,i,x;

	cin>>q;
	while(q--)
	{ 
		cin>>a>>b;
		x=a;
		if(a>b)
			x=b;
		//cout<<a;
		i=(x/2);
		//cout<<i<<"\n";
		sourc=2*i+1;
		//cout<<sourc<<" ";
		destination=2*i+2;
		//cout<<destination<<" ";
		if((a==sourc && b== destination)|| (b==sourc && a==destination) ||(abs(b-a)==2))
			cout<<"YES"<<"\n";
		else 
			cout<<"NO"<<"\n";

	}
}
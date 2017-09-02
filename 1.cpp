#include<bits/stdc++.h>
#define max 1000000007
using namespace std;
int main()
{
	long long int t,n,check;
	cin>>t;
	while(t--)
	{
		long long int result=0;
		cin>>n;
		if(n%2!=0)
		check=(n/2)+1;
	  else
	  	check=(n/2);
		
		if(n%2==0)
			cout<<(n*check)%max<<"\n";
		else
			cout<<((n*check)-n/2)%max<<"\n";
	}
}
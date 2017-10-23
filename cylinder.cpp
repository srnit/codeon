#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,k,r;
	long long int result,result1;
	cin>>t;
	while(t--)
	{
		cin>>n>>k>>r;
		result=3.14*(r*r);
		result1=3.14*(k*k);
		if(2*n*result1<=result)
			cout<<"yes\n";
		else
			cout<<"no\n";
	}
}
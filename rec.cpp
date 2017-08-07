#include<bits/stdc++.h>
using namespace std;
long long int fact(int n)
{
	if(n==0)
		return 1;
	else
		return (n*fact(n-1));
}
int main()
{
	long long int n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<fact(n)<<"\n";
	}
}
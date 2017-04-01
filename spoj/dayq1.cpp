#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	long long int n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n%2==0)
		{
			cout<<n*(n/2)<<"\n";
		}
		else
			cout<<n*n<<"\n";
	}
}
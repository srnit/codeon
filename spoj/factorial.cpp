#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	int n;
	long long int result;
	cin>>t;
	while(t--)
	{result=1;
		cin>>n;
		for(int i=n;i>0;i--)
		{
			result*=i;
		}
		cout<<result<<"\n";
	}
}
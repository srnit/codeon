#include<bits/stdc++.h>
using namespace std;
//int check(std::vector<int> );

int main()
{
	long long int n;
	cin>>n;
	long long int sum=0;
	vector<long int>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];

	}
	for(int i=0;i<n;i++)
	{
		sum+=v[i];
	}
long long int t;
if(sum%2==0)
{
	sum=sum/2;
	t=max(sum,n);
	cout<<t<<"\n";
}
else
{
	sum=(sum/2)+1;
	t=max(sum,n);
	cout<<t<<"\n";
}
	
}



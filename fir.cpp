#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,result;

	cin>>t;
	while(t--)
	{
	result=0;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	{
     
	cin>>v[i];
	}
	sort(v.begin(),v.end());
	for( int i=0;i<n-1;i+=1)
	{
	result+=v[i+1]-v[i];
	}
	cout<<result<<"\n";
	}
}
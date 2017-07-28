#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s,t,a,b,n,m,apple=0,orange=0;
	cin>>s>>t;
	cin>>a>>b;
	cin>>n>>m;
	int arr[n+1];
	int arr1[m+1];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	for(int i=0;i<m;i++)
	{
		cin>>arr1[i];
		
	}
	for(int i=0;i<n;i++)
	{
		//cin>>arr[i];
		if(a+arr[i]>=s && a+arr[i]<=t)
			apple++;
	}
	for(int i=0;i<m;i++)
	{
		//cin>>arr1[i];
		if(b+arr1[i]>=s && b+arr1[i]<=t)
			orange++;
	}
 cout<<apple<<"\n";
 cout<<orange<<"\n";
}
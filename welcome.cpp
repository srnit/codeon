#include<bits/stdc++.h>
using namespace std;
int main()
{ int n;
		ios_base::sync_with_stdio(0); 

	cin>>n;
	int arr[n+1],arr1[n+1],c[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>arr1[i];
		c[i]=arr[i]+arr1[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<c[i]<<" ";
	}
	cout<<"\n";
}
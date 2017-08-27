#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,skip;
	skip=0;
	cin>>n>>k;
	int arr[n+1];
	int count=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]<=k && skip==0)
			count++;
		else if(arr[i]>k && (skip==1 || skip==0))
			skip+=1;
	}
	cout<<count<<"\n";
}
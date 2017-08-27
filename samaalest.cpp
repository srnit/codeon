#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,k,count=0;
	cin>>t;
	while(t--)
	{
		cin>>n>>k
		int arr[n+1];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		for(int i=0;i<n;i++)
		{
			count++;
		    if(count==k)
			 	break;
			if(arr[i]!=arr[i+1])
				count=0;

		}
		cout<<arr[i]<<"\n";
	}
}
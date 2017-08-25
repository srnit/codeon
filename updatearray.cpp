#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		int arr[n+1];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		sort(arr,arr+n);
		if(arr[0]>=k)
			cout<<"0\n";
		else
		cout<<abs(arr[0]-k)<<"\n";
	}
}
#include<bits/stdc++.h>
using namespace std;
#define max 1000000001
int main()
{ 
	ios_base::sync_with_stdio(0); 
	int t,n,count;
	int arr[100001];
	arr[0]=max;
	cin>>t;
	while(t--)
	{
		count=0;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>arr[i];
			if(arr[i]<=arr[i-1])
				count++;
		}	
		cout<<count<<"\n";

	}
}
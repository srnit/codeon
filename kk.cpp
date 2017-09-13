#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,q,num;
	cin>>t;
	int hash[200002];
	while(t--)
	{
		cin>>n;
		int arr[n+1];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			hash[100001+arr[i]]=1;
		}
		cin>>q;
		while(q--)
		{
			cin>>num;
			if(hash[num+100001]==1)
				cout<<"Yes\n";
			else
				cout<<"No\n";
		}
	}
}
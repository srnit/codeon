#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,result,p;
	cin>>t;
	while(t--)
	{
		cin>>n>>p;
		for(int i=0;i<n;i++)
			cin>>arr[i];
		int l=0;
		int r=n-1;
		while(l<=r)
		{
			if(a[l]+a[r]==p)
			{
				cout<<"Yes\n";
				break;
			}
			l++;
			r--;
		}
	}
}
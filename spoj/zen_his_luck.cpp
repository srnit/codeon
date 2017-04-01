#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,k;
	float arr[1007];
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		cout<<fixed;
		cout<<setprecision(10)<<arr[k-1]<<"\n";
	}
}
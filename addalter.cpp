#include<bits/stdc++.h>
using namespace std;
int main()
{
	for(int i=1;i<=9;i++)
		cin>>arr[i];
	int vis[9]={0};
	for(int i=1;i<=7;i++)
	{
		long long int sum=0;
		if(vis[i]==0)
		{
			vis[i]=1;
			sum+=arr[i];
		for(int j=i+2;j<=9;j++)
		{
			vis[j]=1;
			sum+=arr[j];
		}
		cout<<sum<<"\n";
	}
	else
		break;
	}
}
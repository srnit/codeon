#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int n;
	scanf("%d",&n);
	 set <ll> set1; 
	 ll a,b,c;
	ll arr[n+1][n+1];
	ll val[n+1];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			arr[i][j]=0;
		}
	}
	for(int i=1;i<n;i++)
		{	cin>>a>>b>>c;
			arr[a][b]=c;
		}
		for(int i=1;i<=n;i++)
		{
			cin>>val[i];
		}
		
	for(int i=1;i<=n;i++)
	{
		ll cost=0;
		for(int j=i;j<=n;j++)
		{
			if(arr[i][j]!=0)
			{
			cost=arr[i][j]+val[j];
			set1.insert(cost);
		  }
		  if(i==j)
		  {
		  	cost=arr[i][j]+val[j];
			set1.insert(cost);
		  }
			
		}
		
		cout<<set1.size()<<"\n";
		set1.clear();

	}	
	
}
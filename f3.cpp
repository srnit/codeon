#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int count=0;
	cin>>n>>m;
	int parent[n+1];
	int nim[m+1];
	for(int i=1;i<=n;i++)
		parent[i]=i;
	for(int i=1;i<=m;i++)
		cin>>nim[i];
	for(int i=1;i<n;i++)
		{cin>>u>>v;
			paretnt[v]=u;
		}
	for(int i=1;i<=m;i++)
	{
		int temp=nim[i];
		while(1)
		{
			if(parent[temp]==temp)
				{count++;
					break;}
			else
			{
				int x=temp;
				while(parent[x]!=x)
				{
					count++;
					x=parent[x];
				}
				break;
			}
		}
	}
	cout<<count<<"\n";
}
}
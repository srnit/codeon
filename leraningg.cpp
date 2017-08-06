#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k,u,v,num;
	cin>>n>>m>>k;
	int w[n+1];
	vector< pair<int,int> >vec[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>w[i];
		
	}
	for(int i=1;i<=m;i++)
	{
		cin>>u>>v;
		vec[u].push_back(make_pair(w[v],v));
		vec[v].push_back(make_pair(w[u],u));
	}
	for(int i=1;i<=n;i++)
		sort(vec[i].begin(),vec[i].end());
	for(int i=1;i<=n;i++)
		{
			if(vec[i].size()>=k)
				cout<<vec[i][vec[i].size()-k].second<<"\n";
			else 
				cout<<"-1\n";
		}
	}
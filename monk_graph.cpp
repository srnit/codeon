#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k,x,y;
	int w[1001];
	
	cin>>n>>m>>k;
	vector< pair<int,int> >vec[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>w[i];
	}
	for(int i=1;i<=m;i++)
	{
		cin>>x>>y;
		vec[x].push_back(make_pair(w[y],y));
		vec[y].push_back(make_pair(w[x],x));
	}
	for(int i=1;i<=n;i++)
	{
		sort(vec[i].rbegin(),vec[i].rend());
	}
	for(int i=1;i<=n;i++)
	{
		if(vec[i].size()>=k)
		 cout<<vec[i][vec[i].size()-k].second<<"\n";
	else
		 cout<<"-1"<<"\n";
	}
}
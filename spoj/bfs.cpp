#include<bits/stdc++.h>
using namespace std;
int main()
{
	int v,e,v1,v2;
	cin>>v>>e;
	vector<int>adj[v+1];
	//cin>>v>>e;
	for(int i=0;i<e;i++)
	{
		cin>>v1>>v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
	}
	for(int i=1;i<=v;i++)
	{
		for(int j=0;j<adj[i].size();j++)
			cout<<i<<"-->"<<adj[i][j]<<"\n";
	}

}
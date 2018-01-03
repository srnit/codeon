#include<bits/stdc++.h>
using namespace std;
#define inf 1000000001
#define Max 1000001
void initialize(long int dist[],int n)
{
	for(int i=1;i<=n;i++)
		dist[i]=inf;
}

void bellman(long int dist[],vector<long int> v[],int n)
{
	//cout<<"1";
	dist[1]=0;
	for(int i=1;i<=n-1;i++)
	{
		int j=1;
		while(v[j].size()!=0)
		{
			if(dist[v[j][0]]+v[j][2]<dist[v[j][1]])
				dist[v[j][1]]=dist[v[j][0]]+v[j][2];
			j++;
			//cout<<"in";
		}
	}
	//cout<<"out\n";

	for(int i=2;i<=n;i++)
	{
		cout<<dist[i]<<" ";
	}
}
int main()
{
	
	
	int n,m,a,b,w;
	cin>>n>>m;
	vector<long int>v[n+2];
	intdist[n+2];
	initialize(dist,n);
	for(int i=1;i<=m;i++)
	{
		cin>>a>>b>>w;
		v[i].push_back(a);
		v[i].push_back(b);
		v[i].push_back(w);
	}
	//cout<<"out\n";
	bellman(dist,v,n);


}

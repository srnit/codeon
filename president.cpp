#include<bits/stdc++.h>
using namespace std;
#define max 1000001
typedef long long int ll;
pair<int,pair<int,int> >p[max];
int parent[max];
vector<ll> v[max];
ll vis[max];
void dfs(ll s)
 {
    
        vis[s] = true;
       // temp[sub].push_back(s);
        for(ll i = 0;i < v[s].size();++i)
        {
         if(!vis[v[s][i]])
              dfs(v[s][i]);
        }
        return ;
}
void init(int n)
{
	for(int i=0;i<n;i++)
	{
		parent[i]=i;
	}

}
int root(int x)
{
	while(parent[x]!=x)
	{
      x=parent[parent[x]];
	}
	return x;
}
int merge(int x,int y)
{
	int p=root(x);
	int q=root(y);
	parent[p]=parent[q];
	return 0;
}
void president(int n,ll k)
{
	ll mincost=0;
	vector<int>vec;
	for(int i=0;i<n;i++)
	{
		int x=p[i].second.first;
		int y=p[i].second.second;
		int w=p[i].first;
		if(root(x)!=root(y))
		{
		    //cout<<x<<" "<<y<<"\n";
			mincost+=w;
			merge(x,y);
			vec.push_back(w);
		}
	}
	//cout<<mincost;
	
if(mincost<=k)
    {
        cout<<"0\n";
        return ;
    }
    sort(vec.begin(),vec.end());
    ll cnt=0;
    for(ll i=vec.size()-1;i>=0;i--)
    {
        mincost=(mincost-vec[i]+1);
        cnt++;
        if(mincost<=k)
        {
            cout<<cnt<<endl;
            return ;
        }
    }
    cout<<"-1\n";
}
int main()
{
	int n,m,a,b,w;
	ll k;
	memset(vis,0,sizeof(vis));
	cin>>n>>m>>k;
  init(n);
	for(int i=1;i<=m;i++)
	{
		cin>>a>>b>>w;
		 v[a].push_back(b);
        v[b].push_back(a);
		p[i]=make_pair(w,make_pair(a,b));
	}
	ll sub=0;
	for(int i=1;i<=n;i++)
	{
	    if(!vis[i])
	    {
	        dfs(i);
	        sub++;
	    }
	    if(sub>1)
	   { cout<<"-1"<<"\n";
	    return 0;}
	}
	sort(p,p+m);
	president(m,k);

}
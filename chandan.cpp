#include<bits/stdc++.h>
using namespace std;
typedef long int ll;
queue <ll> q;
		ll vec[1001][1001]={0};
		
	    ll level[1001]={0};
	//memset(vec,0,sizeof(vec));
	//memset(color,0,sizeof(color));
	//memset(level,0,sizeof(level));
	ll bfs(ll s,ll n)
	{
		ll color[1001]={0};
		int temp;
		 color[s]=1;
     q.push(s);
     level[s]=0;
     while(!q.empty())
     {
       temp=q.front();
      // cout<<temp<<"\n";
       q.pop();
       for(int j=1;j<=n;j++)
       {

       	if(color[j]==0 && vec[temp][j]!=0)
       	{
       		level[j]=level[temp]+vec[temp][j];
       		q.push(j);
       		color[j]=1;
       	}

       }
     }
    //label:;
     ll x=1;
     for(ll i=2;i<=n;i++)
     {
     	if(level[i]>level[x])
     		x=i;
     }
     return x;

	}
int main()
{
	ll t,n,x,y,w,temp;
	
	cin>>t;
	while(t--)
	{
		cin>>n;
		

		for(ll i=1;i<=n-1;i++)
		{
			cin>>x>>y>>w;
			if(vec[x][y]==0)
			{
				vec[x][y]=w;
				vec[y][x]=w;
			}

		}
		/*for(ll i=1;i<=n;i++)
		{
			for(ll j=1;j<=n;j++)
			{
				cout<<vec[i][j]<<" ";
			}
			cout<<"\n";
		}
		*/
    ll index=bfs(1,n);
        ll index2=bfs(index,n);
        ll ans=level[index2];
        if(ans<=100)cout<<0;
        else if( ans>100 && ans<=1000)cout<<100;
        else if(ans>1000 && ans<=10000) cout<<1000;
        else cout<<10000;
        cout<<" "<<ans<<endl;
	}

}
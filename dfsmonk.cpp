#include<bits/stdc++.h>
using namespace std;
vector<int>v[100005];
bool vis[100005];
int b1,a1;
/*void dfs_util(int s)
	{
		int temp;
		stack<int>s1;
		vis[s]=1;
		s1.push(s);
		while(!s1.empty())
		{
			temp=s1.top();
			b1++;
			s1.pop();
			for(int  i=0;i<v[temp].size();i++)
			{ a1++;
				if(vis[v[temp][i]]==0)
				{
					vis[v[temp][i]]=1;
					s1.push(v[temp][i]);
				}
			}
		}
       return ;
	}*/
void dfs(int i)
{
	vis[i]=1;
	b1++;
	for(int j=0;j<v[i].size();j++)
	{		
		a1++;
		if(!vis[v[i][j]])
			dfs(v[i][j]);
	}
}
int main()
{
	int n,m,e1,v1;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	float ans=0;
	for(int i=1;i<=n;i++)
	{
		if(!vis[i])
		{
			//dfs(i);
			//cout<<edges/2<<"\n";
			a1=0, b1=0;
            dfs(i);
            cout<<a1<<" "<<b1;
            a1=a1/2;
            if(ans<=(a1*1.0)/b1)
            {
                ans=(a1*1.0)/b1;
                e1=a1,v1=b1;
            }
		}
	}
	//cout<<e1<<v1;
	if(ans>1)
        cout<<">1";
    else
        {
            if(e1==v1)
                cout<<1<<"/"<<1;
            else
                cout<<e1<<"/"<<v1;
 
        }
	return 0;
}
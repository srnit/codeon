#include<bits/stdc++.h>
using namespace std;
vector<int>vec[10000];
int  visted[10000]={0};
void bfs(int source)
{
	//bool visted[n];
	//memset(vec,false,sizeof(vec));
	queue<int>q;
	q.push(source);
	visted[source]=1;
	while(!q.empty())
	{
		int v=q.front();
		cout<<v<<" ";
		q.pop();
		for(int i=0;i<vec[v].size();i++)
		{
			int check=vec[v][i];
			if(visted[check]==0)
			{
				visted[check]=1;
				q.push(check);
			}
		}

	}
	return 0;
}
int main()
{int t,n;
	  cin>>t;
	  while(t--)
	  {
	  	cin>>n;
	  	int a[n];
	  	
	  	for(int i=1;i<=2*n;i++)
	  	{
	  		cin>>a[i];
	  	}
	  	for(int i=1;i<2*n;)
	  	{
	  		vec[a[i]].push_back(a[i+1]);
	  		vec[a[i+1]].push_back(a[i]);
	  		i=i+2;
	  	}
	  	bfs(a[1]);

	  }
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
long int t,x;
  cin>>t;
  x=1;
  while(x<=t)
  {
    long int n,m,a,b;
    long int flag=0;
    cin>>n>>m;
    vector<long int> graph[n+1];
    //graph.();
    //graph=new vector<long int>(n);
    for(int i=0;i<m;i++)
    {
      cin>>a>>b;
      graph[a].push_back(b);
      graph[b].push_back(a);
    }
  long  int *visited=(long int *)calloc(n+1,sizeof(long int));
  long  int *list=(long int *)calloc(n+1,sizeof(long int));
  /*  for(int i=1;i<=n;i++)
    visited[i]=0;
    for(int i=1;i<=n;i++)
    list[i]=2;*/

    for(long int i=0;i<=n;i++)
    list[i]=2;
    deque<long int>q;
  //  q.erase(q.begin(),q.end());
    for(long int i=1;i<=n;i++)
    {
      if(visited[i]==0)
      {
        //visited[i]=1;
        q.push_back(i);
        list[i]=1;
        while(!q.empty())
        {long int temp=q.front();
        for(long int j=0;j<graph[temp].size();j++)
        {

          if(list[graph[temp][j]]==2)
          list[graph[temp][j]]=!list[temp];
          else if(list[graph[temp][j]]==list[temp])
          {
            flag=1;
            break;
          }
          if(visited[graph[temp][j]]==0)
          q.push_back(graph[temp][j]);
        }
        q.pop_front();
        visited[temp]=1;
        if(flag==1)
        break;
      }
      if(flag==1)
      break;
    }
}

  if(flag==1)
  {
    cout<<"Scenario #"<<x<<":"<<"\n";
    cout<<"Suspicious bugs found!"<<"\n";
  }
  else
  {
    cout<<"Scenario #"<<x<<":"<<"\n";
    cout<<"No suspicious bugs found!"<<"\n";
  }
  x++;

}
}

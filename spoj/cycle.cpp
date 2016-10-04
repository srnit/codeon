#include<bits/stdc++.h>
using namespace std;
class graph
{
int v,e;
list<int> * adj;
bool iscyclicutil(int v,bool visited[],int parent);
public:
graph(int u,int w);
 void addedge(int u,int w);
bool iscycle();
};
graph :: graph(int v,int e)
{
this->v=v;
this->e=e;
adj=new list<int>[v+1];
}
void graph :: addedge(int u,int w)
{
adj[u].push_back(w);
adj[w].push_back(u);
}
bool graph::iscyclicutil(int v, bool visited[], int parent)
{
    visited[v] = true;
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
    {
        if (!visited[*i])
        {
           if (iscyclicutil(*i, visited, v))
              return true;
        }
        else if (*i != parent)
           return true;
    }
    return false;
}
bool graph::iscycle()
{
bool * visited;
visited=new bool (v);
for(int i=1;i<=v;i++)
visited[v]=false;
for(int i=1;i<=v;i++)
{
if(!visited[v])
return true;
}
return false;
}


int main()
{
  int n,m;
cin>>n>>m;
graph g(n,m);

while(m--)
{
  int a,b;
cin>>a>>b;
g.addedge(a,b);
}
if(g.iscycle())
cout<<"YES"<<"\n";
else
cout<<"NO"<<"\n";
}

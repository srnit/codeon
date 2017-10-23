#include <bits/stdc++.h>
using namespace std;

vector<int> bellmanFord(int n,int source, vector<pair<int, int> > G[])  {
      int INF = (int) 1e9;
      vector<int> D(n, INF);
      D[source]=0;
      for(int i=0; i<n-1; i++)  {
        for(int u=0; u<n; u++)  {
          for(auto edge: G[u])  {
            int v = edge.first, w = edge.second;
            if(D[u]!=INF)
                D[v] = min(D[v], D[u] + w);
          }
        }
      } 
      //To find if a negative cycle exists.n
      for(int u=0; u<n; u++)  {
        for(auto edge: G[u])  {
          int v = edge.first, w = edge.second;
          if(D[u]!=INF and D[v] > D[u] + w) {
            //Negative Cycle exists!!
            assert(0);
          }
        }
      }
      return D;
}

int main(){
    int n,m,s,x,y,z;
    cin>>n>>m>>s; //Input the number of nodes(0 based), number of edges and the source vertex.
    vector<pair<int,int> > *G=new vector<pair<int,int> >[n];
    vector<int>ans;
    for(int i=0;i<m;i++){
        cin>>x>>y>>z; //Input the starting vertex of the edge, the ending vertex and the cost of the edge.
        G[x].push_back(make_pair(y,z));
    }
   //ns has the cost from source to all the vertices.
    cin>>l;
     ans = bellmanFord(n,s,G); //a
   // ans = dijkstra(n,s,G); //ans has the cost from source to all the vertices.
    long long int count=0;
    for(int i=0;i<n;i++)
    {
       // cout<<ans[i]<<" ";
        if(l==ans)
        	count++;
    }
    cout<<count;
    cout<<endl;
}
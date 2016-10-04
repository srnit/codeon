#include<bits/stdc++.h>
using namespace std;
pair<int,int>ipair;
struct graph
{
int V,E;
vector<ipair>edes;
graph(int V,int E)
{
this->V=V;
this->E=E;
}
void addedge(int src,int des)
{
edges.push_back(src,des);
}
}
int main()
{
graph g;
int v,e,src,des;
cin>>v>>e;
graph(v,e);
for(int i=1;i<=e;i++)
{
cin>>src>>des;
g.addedge(src,des);
}

}

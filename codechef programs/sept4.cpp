#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,u,v;
cin>>t;
while(t--)
{

int n,m;
queue<int>q;
cin>>n>>m;
int g[1001][1001];
for(int i=1;i<=n;i++)
{
for(int j=1;j<=n;j++)
{
  if(i==j)
  g[i][j]=1;
  else
  g[i][j]=0;
}
}/////
//cout<<"vuyui"<<"\n";
for(int i=1;i<=m;i++)
{

cin>>u>>v;
if(u!=v)
{
g[u][v]=1;
g[v][u]=1;
}
}////
int color[n+1];
bool check=true;
for(int i=1;i<=n+1;i++)//setting initial color=-1;
color[i]=-1;
//cout<<"kjhkj"<<"\n";
for(int i=1;i<=n;i++)
{
if(color[i]==-1)
color[i]=0;
q.push(i);
while(!(q.empty()))
{u=q.front();
 q.pop();
 //cout<<"q";
for(int v=1;v<=n;v++)
{

if((g[u][v]==0) && color[v]==-1)
{
color[v]=1-color[u];
q.push(v);
}
else  if((g[u][v]==0) && color[u]==color[v])
 {
   check=false;
   //break;
 }

}
}
//cout<<"bhar"<<"\n";
}
if(check==true)
cout<<"YES"<<"\n";
else
cout<<"NO"<<"\n";

}
}

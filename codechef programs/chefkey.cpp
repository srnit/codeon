#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,m,c,count;
cin>>t;
while(t--)
{
count=0;
cin>>n>>m>>c;
for(int i=1;i<=n;i++)
{
if(i*m==c)
{
//cout<<i<<" "; 
count++;
if(i<m && m<n)
count++;
}
for(int i=1;i<=m;i++)
{
if(i*m==c)
{
//cout<<i<<" "; 
count++;
if(i<n && n<m)
count++;
}


}
cout<<count<<"\n";
}
}

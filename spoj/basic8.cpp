#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,x,y,j;
int s[100],q[100];
cin>>n;
cin>>x;
for(j=1;j<=n;j++)
cin>>s[j];
for(j=1;j<=n;j++)
cin>>q[j];
for(int  i=1;i<=n;i++)
{
for(y=-x;y<=x;y++)
if(s[i]==q[i+(y)])
cout<<i<<" ";
}
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,m,c,count,x;
cin>>t;
while(t--)
{
count=0;
cin>>n>>m>>c;
if(m>n)
x=m;
else
x=n;
for(int i=1;i<=x;i++)
{
if(c%i==0)
{
//cout<<i<<" ";
int check=c/i;
if(check<=n && check<=m) 
{
//cout<<i<<" "<<check<<"\n"; 
count++;
}
//if(i<m && m<n)
//count++;
}
}

cout<<count<<"\n";
}
}


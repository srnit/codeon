#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,x,y,r,n;
  int a[10000];
cin>>t;
while(t--)
{
cin>>r>>n;
for(int i=0;i<r;i++)
{
cin>>a[i];
a[i]=a[i]*a[i];
}
//i=0;
int c=0;
sort(a,a+r);
for(int j=0;j<n;j++)
{
cin>>x>>y;
for(int i=0;i<r+1;i++)
{if((x*x+y*y)<=a[i])
{
c=c-i+r;
}
}
}
cout<<c<<"\n";
}
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,a[1000];
int p[1000];
cin>>n;
for(int i=1;i<=n;i++)
{
a[i]=i;
p[i]=1;
}
for(int i=2;i*i<=n;i++)
{
  if(p[i]==1)
  {
    for(int j=2*a[i];j<=n;j+=a[i])
    {
    p[j]=0;
    }
  }
}
for(int i=1;i<=n;i++)
{
  if(p[i]==1)
  cout<<a[i]<<"\n";
}
}

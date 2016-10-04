#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n,k,a[100001];
cin>>n>>k;
for(int i=1;i<=n;i++)
{
if(i-k==k && i+k<=n)
{
a[i]=i+k;
if(a[i]==a[i-1])
a[i]=i-k;
}
}

for(int i=1;i<=n;i++)
{
  if(count(a,a+n,i)==2)
  {
    cout<<"CAPTAIN AMERICA EVADES";
    break;

  }
cout<<a[i]<<" ";
}
cout<<"\n";
}
}

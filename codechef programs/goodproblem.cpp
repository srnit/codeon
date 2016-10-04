#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
  ll check,n,sum,max1;
  cin>>n;
  sum=0;
  ll a[100000];
  for(ll i=1;i<n;i++)
  cin>>a[i];
  for(ll i=1;i<=n;i++)
  {for(ll j=i+1;j<=n;j++)
    {
    if(((a[i]&a[j])==a[i])||((a[i]&a[j])==a[j]))
    {
      cout<<i<<" "<<j<<"\n";
      check=0;
      for(ll k=i;k<=j;k++)
      {
        max1=max(k,k+1);
        if(max1>check)
        {
          check=max1;
        }
      }
      cout<<check<<"\n";
    }

  }
    sum+=check;
}
  cout<<sum<<"\n";
}

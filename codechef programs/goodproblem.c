#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//using namespace std;
typedef long long int ll;
max(ll n,ll m)
{
  if(n>m)
  return n;
  else if(m>=n)
  return m;
}
int main()
{
  ll check,n,sum,maxval,i,j,k;
  //cin>>n;
  scanf("%lld",&n);
  sum=0;
  ll a[100000];
  for( i=1;i<=n;i++)
  scanf("%lld",&a[i]);
  //cin>>a[i];
  for( i=1;i<=n;i++)
  {for( j=i+1;j<=n;j++)
    {
    if((a[i]&a[j])==a[i]||(a[i]&a[j])==a[j])
    {
      //printf("i=%lld j=%lld\n",i,j);
      //cout<<i<<" "<<j<<"\n";
      check=0;
      for( k=i;k<j;k++)
      {
        ll n=a[k];
        ll m=a[k+1];
        maxval=max(n,m);
        if(maxval>=check)
        {
          check=maxval;
        }
      }
      //printf("%lld\n",check);
      //cout<<check<<"\n";
 sum+=check;
    }

  }
 
}
printf("%lld\n",sum);
  //cout<<sum<<"\n";
}

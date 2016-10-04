#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    ll n;
    int magic,r,j,check;
    magic=0;
  check=1;

    cin>>n;
    ll a[n+1],flag[n+1];
    for(ll i=0;i<n;i++)
    {
    cin>>a[i];
    flag[i]=0;
  }
    for(ll k=0;k<n;k++)
    {
     //r=0;
     if(flag[k]==0)
     {
        j=k;
       flag[k]=check;

       //cout<<j<<"\n";
       //j=(j+a[j]+1)%n;
      while(1)
      {
        j=(j+a[j]+1)%n;

      //  cout<<j<<"\n";
        if(flag[j]==check || flag[j]==0)
        {
           if(flag[j]==check )
           {
             flag[j]=check+1;
             magic++;
           }
           else
           {
             flag[j]=check;

           }
         }
           else
           {
           check=check+2;
           break;
         }
        }
      }
    }

      cout<<magic<<"\n";
  }

}

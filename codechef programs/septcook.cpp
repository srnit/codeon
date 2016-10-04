#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  long long int n,b,m;
  long long int check,first;
  cin>>t;
  while(t--)
  {
    cin>>n>>b>>m;
check=0;
    while(1)
    {


      if(n%2==0)
      first=n/2;
      else
      first=(n+1)/2;
      check+=first*m;
      n-=first;
      if(n==0)
      {
       break;
      }
      else
      {
        check+=b;
        m=2*m;
      }

      }
      cout<<check<<"\n";
  }
}

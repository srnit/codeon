#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t,x[1000001],y[1000001],a,b,c,d;
  cin>>t;
  while(t--)
  {
  long long  int sol=0;
    cin>>a>>b>>c>>d;
  /*  max1=max(a,b);
    if(max(c,d)<max1)
    max1=max1;
    else
    max1=max(c,d);
    */

    for(int i=c;i<=d;i++)
    {
    if(i<=b)
    {
      if(i-a>0)
      sol+=i-a;
    }
    else if(i>b)
    sol+=(b-a)+1;
      }
  cout<<sol<<"\n";
  }

}

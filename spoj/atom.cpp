#include<bits/stdc++.h>
using namespace std;
 typedef  unsigned long long  ll;
int main()
{ int t;
ll i,n,m,k;
cin>>t;
while(t--)
{
  i=0;
  ll tim1e=0;
cin>>n>>k>>m;
while(1)
{

if(double(n)*double(k)>(double)m)
break;
n=n*k;
tim1e++;
//cout<<tim1e<<" "<<i<<"\n";

}
cout<<tim1e<<"\n";


}

}

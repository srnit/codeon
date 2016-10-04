#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
  string a,b,A,B;
  int t;
  cin>>t;
  while(t--)
  { ll a0,a1,b0,b1;
  cin>>a>>b;
  for(ll i=0;a[i]!='\0';i++)
  {
  	if(a[i]!=b[i])
  	{
      A[i]=a[i];
      B[i]=b[i];
  	}
  }
  for(ll i=0;A[i]!='\0';i++)
  {
  	cout<<A[i]<<"\n";
  	cout<<B[i]<<"\n";
  }
 
  


  }
}

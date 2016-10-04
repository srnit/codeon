#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;

  cin>>t;
  while(t--)
  {
    int n,m;
    cin>>n>>m;
    long long int *v,*v1;
    v=new long long int(n+m);
      v1=new long long int(n+m);
    for(long long int i=0;i<n;i++)
    cin>>v[i];
    for(long long int i=0;i<m;i++)
    cin>>v1[i];
    sort(v,v+n);
    for(long long int j=0;j<m;j++)
    {
      int check=0;
    for(long long int i=0;i<n;i++)
    {
    if(binary_search(v,v+n,i))
    {
      check=1;
  //  cout<<"YES"<<"\n";
    break;
    }
}
if(check==1)
 cout<<"YES"<<"\n";
 else
 cout<<"NO"<<"\n";

  }
}
}

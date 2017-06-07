#include<bits/stdc++.h>
using namespace std;
int main()
{long long int t,n;
  cin>>t;
  string l,l1,l2,l3,l4;
  while(t--)
  {
    //cout<<l.maxsize();
    l.erase(l.begin(),l.end());
    l4.erase(l4.begin(),l4.end());
    cout<<l<<l4;
    long long int count ,check;
    check=count=0;
    cin>>l1>>l2>>l3>>n;
    while(n--)
    {
        l4+=l2;
    }
    l=l1+l4+l3;
    //l=l+l3;
   // cout<<l<<"\n";
    for(long long int i=l.size()-1;i>=0;i--)
    {
        //cout<<"h"<<"\n";
        if(l[i]=='0')
            check=1;
        else if(l[i]=='1' && check==1)
            count++;
    }
    cout<<count+1<<"\n";
  }


}

#include<bits/stdc++.h>
using namespace std;
int main()
{
list<int>lt;
list<int>lt1;
int t,q,a,b;
cin>>t;
while(t--)
{
lt.clear();
lt1.clear();
cin>>q;
for(int i=1;i<=q;i++)
{cin>>a;
  lt.push_back(a);
  if(a==1)
  {
    cin>>b;
lt1.push_back(b);
}
if(a==2)
{
  cout<<lt1.front()<<" ";
  lt1.pop_front();
}
}

cout<<"\n";

}
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,x1,x2,y1,y2,r1,r2;
  cin>>t;
  while(t--)
  {
    cin>>x1>>y1>>r1>>x2>>y2>>r2;
    if((x1==x2 && y1==y2)||((x1<x2 && y1>y2)|| (x1>x2 || y1<y2)) )
    {
      if(r1>r2 || r2<r1)
      cout<<"I\n";
    }
    if(x1!=x2 && y1!=y2)
    {
      if(r1>r2 || r2>r1)
      cout<<"E\n";

    }
    else
    cout<<"O\n";
  }
}

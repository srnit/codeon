#include<bits/stdc++.h>
using namespace std;
 
bool isInside(int circle_x, int circle_y, int rad, int x, int y)
{
    // Compare radius of circle with distance of its center from 
    // given point
    if ((x - circle_x)*(x - circle_x) + 
        (y - circle_y)*(y - circle_y) <= rad*rad)
        return true;
    else
        return false;
}
 
// Driver function
int main()
{
  int n,m,x,y,radius,eaten,px,py,t;
  // int x = 1, y = 1;
   //int circle_x = 0, circle_y = 1, rad = 2;
  vector<int> v;
  cin>>t;
  while(t--)
  {
    int result=0;
    cin>>n>>m;
    while(n--)
    {
      cin>>x>>y>>radius>>eaten;
      if(eaten==1)
      {
        v.push_back(x);
        //v.push_back(x+radius);
        v.push_back(y);
        v.push_back(radius);
        
        //v.push_back(y+radius);
      }
    }
    while(m--)
    {
      cin>>px>>py;
       for(int i=0;i<v.size()-2;i+=3)
       {
      if(isInside(x, y, radius, px, py))
      { 
                      result+=1;
                      break;
                    }
                    //cout<<i<<" ";
                  }
    }
    cout<<result<<"\n";

  }
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  int n;
//  list<int> *adj;
list<int> adj;
vector<int>v;
  cin>>t;//test case;
  while(t--)
  {//beg while
    v.clear();
    int check,check1;
    check=check1=0;
    int result=0;
    int sum;
    cin>>n;
    //adj=new list<int>(n+1);
    for(int i=0;i<n;i++)
    {//beg of 1 for
      sum=0;
      int s=0;
          adj.clear();
      int a;
      cin>>a;
      for(int j=0;j<a;j++)
      {int b;

        cin>>b;
        adj.push_back(b);
      }
      sum=sum+a;
      adj.unique();
      //list<int> :: iterator it;
       s=adj.size();
    //  cout<<s<<"\n";
      if(s==4)
      sum+=1;
      else if(s==5)
      sum+=2;
      else if(s==6)
      sum+=4;
      //cout<<sum;
      v.push_back(sum);
      if(sum>=result)
      {
        result=sum;
        check++;
      //  max=result;
      }

  }//end of 1 for loop
  sort(v.begin(),v.end());
  // v.reverse();
  int y=v.size();
  check1=count(v.begin(),v.end(),v[y-1]);
//  cout<<check1<<" ";
  if(check1>=2)
  cout<<"tie"<<"\n";
  else if(check==1)
  cout<<"chef"<<"\n";
  else
  cout<<y<<"\n";

  }///end of while
}

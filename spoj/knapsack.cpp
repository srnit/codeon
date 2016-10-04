#include<bits/stdc++.h>
using namespace std;
int main()
{
  float profit,weight,profit_ratio;
int s,n,result,check;
vector<float>v;
vector<float>v1;
std::vector<float>v2;
cin>>s>>n;
result=0;
while(n--)
{
cin>>weight>>profit;
profit_ratio=profit/weight;
v.push_back(weight);
v1.push_back(profit);
v2.push_back(profit_ratio);
}
sort(v2.begin(),v2.end());
for(int j=v2.size()-1;j>0;j--)
{
  if(check<s)
  {
    //cout<<"hello";
  for(int i=0;i<v.size();i++)
  {
    if(v1[i]/v[i]==v2[j])
    {
      check+=v[i];
      result+=v1[i];
      s-=v[i];
    //  cout<<weight<<" "<<v[i];
     v.erase(v.begin()+i);
     v1.erase(v1.begin()+i);
    }
  }
}
}
cout<<result<<"\n";
}

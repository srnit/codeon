#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m,t,x,flag,i,k=0;
cin>>n>>m;
vector<pair<int,int> >a;
for(i=0;i<n*m;i++)
{
cin>>x;
k=i/m;
a.push_back(make_pair(x,k));
}
cin>>t;
while(t--)
{
cin>>x;
flag=0;
for(i=0;i<n*m;i++)
{
if(a[i].first==x)
{
flag=1;
break;
}

cout<<a[i].first<<" "<<a[i].second<<endl;
}
if(flag==1)
cout<<a[i].second<<" "<<i%m<<"\n";
else
cout<<"-1 -1\n";
}
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,t;
cin>>n;
list<int>l;
int *result;
cin>>t;
int sum;
while(t--)
{
  sum=0;
int k=0;
cin>>n;
result =new int(n);
for(int i=0;i<n;i++)
{
  int a;
cin>>a;
for(int j=0;i<a;j++)
{int b;
  cin>>b;
  l.push_back(a);
}
l.unique();
sum+=a;
sum+=l.size();
result[k]=sum;
k++;
}
for(int i=0;i<n;i++)
cout<<result[i]<<" ";
}
}

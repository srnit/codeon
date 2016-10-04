#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,count;
cin>>t;
while(t--)
{
int p;
count=0;
cin>>p;
for(int i=11;i>=0;i--)
{
if(p!=0)
{
int x=pow(2,i);
//cout<<x<<" ";
while(p/x!=0)
{
//cout<<x<<" ";
count++;
p=p-x;
//cout<<p<<"\n";

}
}
}
cout<<count<<"\n";
}
}

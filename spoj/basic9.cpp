#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,flag,flag1;
flag=flag1=0;
int s[100];
cin>>n;
for(int j=1;j<=n;j++)
cin>>s[j];
for(int i=1;i<=n/2;i++)
{
if(s[i]>s[i+1])
flag=1;
else
break;
}
for(int i=(n/2)+1;i<=n;i++)
{
if(s[i]<s[i+1])
flag1=1;
else
break;
}
if(flag==1 && flag1==1)
cout<<"Yes"<<"\n";
else
cout<<"No"<<"\n";
}

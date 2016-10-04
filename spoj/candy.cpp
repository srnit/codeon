#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,n,check3,check5,flag,check,j;
check3=check5=flag=0;
cin>>t;
j=1;
while(j<=t)
{
  check3=check5=flag=0;
cin>>n;
for(int i=3;i<=n;i++)
{
if(i%3==0)
{
  if(n-i<5)
  break;
  else
  {
  check=n-i;
  if(check%5==0)
  {
  flag=1;
  check5=check;
  }
  }
check3=n-check5;

}
}
if(flag==0)
cout<<"Case"<<" "<<j<<":"<<" "<<"-1"<<"\n";
else if(flag!=0)
cout<<"Case"<<" "<<j<<":"<<" "<<check3<<"\n";
j++;
}
}

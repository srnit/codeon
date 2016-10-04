#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,p,q;
cin>>t;
while(t--)
{
  int n,k;

  int flag;
  flag=0;
cin>>n;
if(n==1)
{
  cin>>p;
  //cout<<p<<" ";
 int a[p+5],A[p+5];
  for(int i=1;i<=p;i++)
  {
  cin>>a[i];
  //check1[i]=0;
  //cout<<a[i]<<" ";
  }

  for(int i=1;i<=p;i++)
  {
  cin>>A[i];
    if(A[i]!=a[p-i+1])
    flag++;
  //cout<<A[i]<<" ";

  }
/*
  int j=p;
  for(int i=1;i<=p;i++)
  {

  if(a[j]==A[i])
  flag++;
  cout<<a[j]<<"\n";

 j--;
 */
  }
  if(flag==0)
  cout<<"Yes"<<"\n";
  else
  cout<<"No"<<"\n";

}

/*
else
{
cin>>p;
for(int i=1;i<=p;i++)
{
cin>>a[i];
check1[i]=0;
}
cin>>q;
for(int i=1;i<=p;i++)
{
cin>>b[i];
check[i]=0;
}
for(int i=1;i<=p+q;i++)
{
cin>>A[i];

}
for(int i=1;i<=p+q;i++)
{
  for(int j=p;j>0;)
  {
if(A[i]==a[j])
{
check[i]=1;
if(i<=p+1 && check[j+1]==0)
flag=0;
}
if(A[i]==b[k])
{
if(i<=q+1 && check1[k+1]==0)
flag1=0;
}
j--;
k--;
}
}
if(flag==0 || flag1==0)
cout<<"Yes"<<"\n";
else
cout<<"No"<<"\n";
}
*/
}

#include<stdio.h>
//using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
  cin>>n;
  for(int i=0;i<n;i++)
  cin>>a[i];
  for(int i=0;i<n;i++)
  {
    p[i]=0;
  }
}
for(int i=0;i<n-1;i++)
{
  cin>>a>>b;
  if(p[a]==0)
  p[b]=a;
  else
  p[b]=p[b];
}
for(int i=0;i<n;i++)
{
  for(int j=0;j<n;j++)
  {
    if(p[j]=i)
    {
      xor=i^j;
    }
  }
}

}

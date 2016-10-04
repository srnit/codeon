#include<bits/stdc++.h>
using namespace std;
int main()
{
float n,sum,sum1;
sum=sum1=0;
float s[100],q[100];
cin>>n;
for(int i=1;i<=n;i++)
{
cin>>s[i];
sum+=s[i];
}
int n1;
cin>>n1;
for(int i=1;i<=n1;i++)
{
cin>>q[i];
sum1+=q[i];
}
//cout<<sum<<" "<<sum1<<"\n";
sum/=n;
sum1/=n1;
//cout<<sum<<" "<<sum1<<"\n";
if(sum>sum1)
{
for(int i=1;i<=n;i++)
cout<<s[i]<<" ";
}
else
for(int i=1;i<=n1;i++)
cout<<q[i]<<" ";


}

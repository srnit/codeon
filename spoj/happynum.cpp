#include<bits/stdc++.h>
using namespace std;
int digitsum(int n)
{int ans=0;
while(n>0)
{
int digit=n%10;
ans+=digit*digit;
n=n/10;
}
return ans;
}
int main()
{long long int n,count,check;
cin>>n;
count=0;
check=1;
int array[1000000]={0};
while(1)
{
int temp=digitsum(n);
if(n==1)
break;
if(array[temp]==0)
{
n=temp;
array[n]=1;
count++;
}
else
{
check=0;
break;
}

}
if(check==1)
{
cout<<count<<"\n";
}
else
cout<<"-1"<<"\n";
}

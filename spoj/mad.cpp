#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int a,b;
long long int result;
cin>>a>>b;
////////////////
if(a%2==0)
{
 result=0;
for(long long int i=a+1;i<=b;)
{if(i%2!=0)
result+=i;
i=i+2;
}//1.if
cout<<result<<"\n";
}//forloop1
else if(a%2!=0)
{
 result=0;
for(long long int i=a;i<=b;)
{
if(i%2!=0)
result+=i;
i=i+2;

}//for lopp2
cout<<result<<"\n";
}//2.if

}//main

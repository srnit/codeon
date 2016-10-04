#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int a,b;
cin>>a>>b;
////////////////
if(a%2==0)
{
long long int result=0;
for(long long int i=a+1;i<=b;)
{if(a%2!=0)
result+=a;
i=i+2;
}//1.if
}//forloop1
else if(a%2!=0)
{
long long int result=0;
for(long long int i=a;i<=b;)
{
if(a%2!=0)
result+=a;
i=i+2;

}//for lopp2
}//2.if
}//main

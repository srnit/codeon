#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,j;
  long long int b,x;
cin>>t;
j=1;
while(j<=t)
{
cin>>b>>x;
//////////////////////////////
while(1)
{
if(b==1)
{
cout<<"Case"<<" "<<j<<":"<<" "<<"Math Error!"<<"\n";
break;
}
/////////////////////////////////
else
{
double result=0;
result=log(x)/log(b);
if(result>0)
{
cout<<fixed;
cout<<setprecision(5)<<"Case"<<" "<<j<<":"<<" "<<result<<"\n";
break;
}
else
{
cout<<"Case"<<" "<<j<<":"<<" "<<"Math Error!"<<"\n";
break;
}
//////////////////////////////////
}
////////////////////////////////////
}
//////////////////////////////////////////
j++;
}
}

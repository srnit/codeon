#include<bits/stdc++.h>
using namespace std;
int main()
{
char ch[100001];
int t;
cin>>t;
while(t--)
{
int count0,count1,check;
count0=count1=0;
scanf("%s",ch);
for(int i=0;ch[i]!='\0';i++)
{
if(ch[i]=='1')
count1++;
if(ch[i]=='0')
count0++;
if(count1==2 && count0==2)
{
check=0;
break;
}
}
if(count0==1)
cout<<"Yes"<<"\n";
else if(count1==1)
cout<<"Yes"<<"\n";
else
cout<<"No"<<"\n";

}
}

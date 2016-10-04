#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a;
char ch[101];
deque<int>dq;
int q;
while(q--)
{
scanf("%s%d",ch,&a);

if(ch[0]=='f')
{
  if(!dq.empty())
  cout<<"No job for Ada?"<<"\n";
  else
  {
  cout<<dq.front()<<"\n";
  dq.pop_front();
}
}
if(ch[0]=='b')
{
  if(!dq.empty())
  cout<<"No job for Ada?"<<"\n";
  else
  {
  cout<<dq.back()<<"\n";
  dq.pop_back();
}
  }
if(ch[0]=='r')
{
  if(!dq.empty())
  cout<<"No job for Ada?"<<"\n";
  else
  reverse(dq.begin(),dq.end());
}
if(ch[0]=='p')
{//cin>>a;
  dq.push_back(a);
}
if(ch[0]=='t')
{
  //cin>>a;
  dq.push_back(a);

}
}
}

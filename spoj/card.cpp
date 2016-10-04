#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
deque<int>dq;
while(1)
{
cin>>n;
dq.erase(dq.begin(),dq.end());
for(int i=1;i<=n;i++)
dq.push_back(i);
if(n==0)
break;
else
{
  while(1)
  {
if(dq.size()==2 || dq.size()==1)
break;
else
{
dq.pop_front();
int temp=dq.front();
//cout<<temp<<"\n";
dq.pop_front();
dq.push_back(temp);
}
}
}
cout<<dq.back()<<"\n";
}
cout<<"0"<<"\n";

}

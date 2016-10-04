#include<bits/stdc++.h>
using namespace std;
int main()
{
deque<int>q;
int t,n,m;
cin>>t;
while(t--)
{
cin>>n;
if(n==1)
{
if(q.empty())
cout<<"No Food"<<"\n";
else
{
cout<<q.front()<<"\n";
q.pop_front();
}
}
if(n==2)
{
cin>>m;
q.push_front(m);
}

}
}

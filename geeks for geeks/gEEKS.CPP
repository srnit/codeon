#include<bits/stdc++.h>
using namespace std;
int main()
{
deque <int>dq;
int t;
cin>>t;
while(t--)
{int num;
cin>>num;
for(int i=1;i<=num;i++)
{
  dq.clear();
 int n=i;
while(n!=1)
{
dq.push_front(n%2);
n=n/2;
}
dq.push_front(n);
deque <int> ::iterator it;
for(it=dq.begin();it!=dq.end();it++)
{
cout<<*it;
}
cout<<" ";

}
cout<<"\n";

}
}

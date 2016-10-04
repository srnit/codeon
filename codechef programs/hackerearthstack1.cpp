#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
deque<int>q;
cin>>t;
while(t--)
{int n,id,id1;
char ch;
q.clear();
cin>>n>>id;
q.push_front(id);
while(n--)
{//cout<<"hb";
scanf("%c",&ch);
if(ch=='P')
{
cin>>id1;
q.push_front(id1);
}
else if(ch=='B')
{q.pop_front();}
}
cout<<"player"<<" "<<q.front()<<"\n";
}
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,top;
cin>>t;
stack<int>st;
deque <int> dq;
char s[51];
//stack<int>::iterator it;
//cin>>t;
while(t--)
{


top=-1;
int result=0;
scanf("%s",s);
//cout<<"df ";
cout<<strlen(s);
//cout<<" "<<s[strlen(s)];
if(s[0]!=s[strlen(s)])
result++;
for(int i=0;s[i]!='\0';i++)
{
  st.push(s[i]);
  }
  while(top!=-1)
  {
    if(st.top()=='{')
    {
    dq.push_back(st.top());
    st.pop();
  }
  if(st.top()=='}')
  {
    st.pop();
    dq.pop_front();
  }
  }
  result+=dq.size();
  cout<<result<<"\n";
  //st.pop();
}//while

}//main

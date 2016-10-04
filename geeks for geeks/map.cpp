#include<bits/stdc++.h>
using namespace std;
int main()
{
char choice;
map<int,int>map1;
choice='y';
//////////////////////////////////////////
while(choice=='y')
{
int a,b;
cin>>a>>b;
map1.insert(pair<int,int>(a,b));
cout<<"prres  y/n for continue"<<"\n";
cin>>choice;
//fflush(stdin);
}
///////////////////////////////////////////
map<int,int> ::iterator it;
for(it=map1.begin();it!=map1.end();it++)
{
  cout<<"\t"<<it->first<<"\t"<<it->second<<"\n";
}
map<int,int>map2;
map2.insert(map1.begin(),map1.end());
cout<<"element of map2"<<"\n";
for(it=map2.begin();it!=map2.end();it++)
{
  cout<<"\t"<<it->first<<"\t"<<it->second<<"\n";
}
map2.erase(10);
map2.erase(20);
map2.erase(30);
cout<<"erased map2"<<"\n";
for(it=map2.begin();it!=map2.end();it++)
{
  cout<<"\t"<<it->first<<"\t"<<it->second<<"\n";
}
map2.erase(map2.begin(),map2.find(90));
cout<<" second erased map2 "<<"\n";
for(it=map2.begin();it!=map2.end();it++)
{
  cout<<"\t"<<it->first<<"\t"<<it->second<<"\n";
}
}

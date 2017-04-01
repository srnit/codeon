#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<string> v(200,"raman");
for(int i=0;i<200;i++)
cout<<v[i]<<"\n";
vector<string>v1(v.begin(),v.end());
for(int i=0;i<200;i++)
{
cout<<v1[i]<<" ";

}
cout<<"\n";
int data[10]={1,2,3,8,10,45,50,42,89,65};
vector<int>vec(data,data+10);
reverse(vec.begin(),vec.end());
vector<int>::iterator it;
for(it=vec.begin();it!=vec.end();it++)
{
cout<<*it<<" ";
}
cout<<"\n";
cout<<"enter an element you want to search in to the vector"<<"\n";
int num;
cin>>num;
if(find(vec.begin(),vec.end(),num)!=vec.end())
{
cout<<"number is found at"<<find(vec.begin(),vec.end(),num)-vec.begin()<<"\n";
cout<<"max element ->"<<*max_element(vec.begin(),vec.end())<<"\n";
cout<<"min element ->"<<*min_element(vec.begin(),vec.end())<<"\n";
}

}

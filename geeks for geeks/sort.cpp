#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,k;
char  *a;
cin>>n;
a=new char(n);
for(int i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
for(int i=0;i<n;i++)
cout<<a[i]<< " ";
cout<<"\n";
cin>>k;
if(binary_search(a, a + n, k))
cout<<"yes"<<"\n";
else
cout<<"no\n";
vector<int>vect(a,a+n);
cout<<distance(vect.begin(),max_element(vect.begin(),vect.end()))<<"\n";

vect.errase(unique(vect.begin(),vect.end()));
for(int i=0;i<n;i++)
cout<<vect[i]<<" ";

}

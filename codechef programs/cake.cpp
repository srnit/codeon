#include<bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;
assert(1<=t&&t<=1000);
while(t--)
{string s;
cin>>s;
int n,m;
int num=0;
n=m=0;
int i=0;
while(s[i]!='\0')
{
if(n>num)
{m=num;
num=n;
}
for(int j=0;s[j]!='\0';j++)
{
 if(s[i]==s[j])
 n++;
else
m++;
}
i++;
}
if(num==m)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
}

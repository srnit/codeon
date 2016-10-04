#include<bits/stdc++.h>
using namespace std;
int main()
{
char s[27],w[13];
int n;
scanf("%s",s);
scanf("%d",&n);
while(n--)
{
  int check=1;
int flag=0;
scanf("%s",w);
for(int i=0;w[i]!='\0';i++)
{
for(int j=0;s[j]!='\0';j++)
{
if(w[i]==s[j])
{
flag++;
//cout<<flag<<"\n";
break;
}
}
}
if(flag==strlen(w))
cout<<"Yes"<<"\n";
else
cout<<"No"<<"\n";

}
}

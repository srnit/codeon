#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
       string str,str2=" ";
       int hash[str.length()+1]={0};
       cin>>str;
       for(int i=0;i<str.length();i++)
       {
       	hash[str[i]-'a']++;
       	if(hash[str[i]-'a']==2)
       		str2+=str[i];
       }
       cout<<str2<<"\n";

	}

}
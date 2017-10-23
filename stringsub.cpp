#include<bits/stdc++.h>
using namespace std;
int main()
{
	cin>>t;
	while(t--)
	{
		map<char,int>map1,map2;
		string str;
		cin>>str;
		for(int i=0;i<str.length();i++)
		{
			if(str[i]=='a' || str[i]=='e' || str[i]=='i'||str[i]=='o' ||str[i]=='u')
			{
				map2[str[i]]=i;
			}
			else
				map1[str[i]]=i;
		}
	}
}
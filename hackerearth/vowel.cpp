#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		int hash[str.length()+1]={0};
		long long int count=0;
		for(int i=0;i<str.length();i++)
		{
			if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u')
			{
				if(!hash[str[i]-'a'])
				{
					count++;
					hash[str[i]-'a']=1;
				}
			}
		}
		cout<<count<<"\n";
	}
}
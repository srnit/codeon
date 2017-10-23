#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{ string str;
		cin>>str;
		int hash[1001]={0};
		int check,check1;
		check1=check=0;
		for(int i=0;i<str.length();i++)
		{
			hash[str[i]-'a']++;
		}
		if(str.length()%2!=0)
		{
			for(int i=0;i<str.length();i++)
			{
				if(hash[str[i]-'a']%2!=0 && check==0)
				{
					check=1;

				}
				else if(hash[str[i]-'a']%2!=0 && check==1)
				{
                 check1=1;
                 break;   
				}

			}
			if(check1==1)
				cout<<"No\n";
			else
				cout<<"Yes\n";
		}
		else 
		{
			check1=0;
			for(int i=0;i<str.length();i++)
			{
				if(hash[str[i]-'a']%2!=0)
				{
					check1=1;
					break;
				}
			}
			if(check1==1)
				cout<<"No\n";
			else
				cout<<"Yes\n";
		}
	}
}
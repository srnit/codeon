#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	while(t--)
	{
		string s;
		cin>>s;
		int count=0;
		for(int i=0;i<s.length();i++)
		{
			if(i==0)
			{
              if(abs(s[i]-s[i+1])==1)
              	count++;
			}
			else if(i==s.length()-1)
			{
				if(abs(s[i]-s[i+1])==1)
					count++;
			}
			else if(abs(s[i]-s[i+1]==1) || abs(s[i]-s[i+1])==1)
				count++;
		}
		if(count==s.length())
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}
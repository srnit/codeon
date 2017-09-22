#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,len;
	cin>>t;
	string str;
	
		int fre[100001]={0};
		int result=0;
		cin>>str;
		len=str.length();
		for(int i=0;i<len;i++)
		{
			if(str[i]=='a'|| str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
			{
			fre[str[i]-'a']++;
			result+=fre[str[i]-'a'];
		}

		}
		if(len==result && fre[0]!=0 && fre['e'-'a']!=0 && fre['i'-'a']!=0 && fre['o'-'a']!=0 && fre['u'-'a']!=0)
			cout<<"YES\n";
		else
			cout<<"NO\n";


	}

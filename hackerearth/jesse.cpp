#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		//cin>>n;
		string str,str2="";
		cin>>str;
		for(int i=0;i<str.length();i++)
		{
			if(str[i]>=65 && str[i]<=90)
			{
				int  ch=int ((str[i]-65)+i+1)%26;
				str2+=char(ch+97);

			}
			else if(str[i]>=97 && str[i]<=127)
			{
                 int  ch=int ((str[i]-97)+i+1)%26;
				str2+=char(ch+65);
				
			}
		}
		cout<<str2<<"\n";

	}
}
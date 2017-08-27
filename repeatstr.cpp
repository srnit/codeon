#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,val,bit,check;
	cin>>t;
	while(t--)
	{
		char result;
		check=0;
		string str;
		cin>>str;
		bit=0;
		for(int i=0;i<str.length();i++)
		{
			val=str[i]-'a';
			if((bit & (1<<val))>0)
				{ check=1;
 					result=str[i];
					break;
				}
				else
					bit=bit|(1<<val);

		}
		if(check==1)
			cout<<result<<"\n";
		else
			cout<<"-1\n";
	}
}
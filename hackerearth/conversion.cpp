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
		//int str2[str.lenght()+1];
		for(int i=0;i<str.length();i++)
		{
			if(str[i]>=65 && str[i]<=90)
			{
				cout<<str[i]-'A'+1;
			}
			else if(str[i]>=97 )
				cout<<str[i]-'a'+1;
			else if(str[i]==32)
				cout<<"$";
		}
		
		cout<<"\n";
	}
}
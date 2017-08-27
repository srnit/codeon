#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	string str;
	cin>>t;
	while(t--)
	{
		cin>>str;
		sort(str.begin(),str.end());
		if(str[0]=='0')
		{
			for(int i=0;i<str.length();i++)
			{
				if(str[i]!='0')
				{
					int temp=str[i];
			        str[i]=str[0];
			         str[0]=temp;
			         break;
				}
			}
			
		}
		cout<<str<<"\n";
	}
}
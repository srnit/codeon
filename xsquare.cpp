#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		int check=0;
		int fre[101]={0};
		cin>>str;
		for(int i=0;i<str.length();i++)
			fre[str[i]-'a']++;
        for(int i=0;i<str.length();i++)
        {
        	if(fre[str[i]-'a']==1)
        		str.erase(str.begin()+i);
        	else if(fre[str[i]-'a']%2==0)
        	 {
        	 	check=1;
        	 	break;
        	 }
        }
        if(check==1)
        	cout<<"Yes\n";
        else
        	cout<<"No\n";

	}
}
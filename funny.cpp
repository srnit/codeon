#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	string str;
	cin>>t;
	while(t--)
	{int count=0;
		cin>>str;
		string revstr=str;
		reverse(str.begin(),str.end());
		//cout<<revstr<<"\n";
		//cout<<str<<"\n";
		for(int i=1;i<str.length();i++)
		{
			if(abs(str[i]-str[i-1])==abs(revstr[i]-revstr[i-1]))
				count++;
		}
		if(count==str.length()-1)
			cout<<"Funny\n";
		else
			cout<<"Not Funny\n";
	}

}

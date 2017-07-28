#include<bits/stdc++.h>
using namespace std;
int main()
{
	int len;
	string str;
	cin>>len;
	cin>>str;
	int i=0;
	while(i<str.length())
	{
		if(str[i]==str[i+1])
		{
			//cout<<str.length()<<"\n";
		str.erase(remove(str.begin(),str.end(),str[i]),str.end());
	//cout<<str.length()<<"\n";
		i=0;
		}
		else
			i++;
	
	}
	i=0;
	int ele1=count(str.begin(),str.end(),str[0]);
	int ele2=count(str.begin(),str.end(),str[1]);
	cout<<ele2+ele1<<"\n";
	//cout<<r.length()<<"\n";
	
}
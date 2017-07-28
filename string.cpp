#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	for(int i=0;i<str.length();)
	{
		//cout<<str[0]<<"\n";
		if(str[i]==str[i+1])
            {str.erase(str.begin()+i,str.begin()+(i+2));
            	//cout<<str<<"\n";
            	i=0;
	}
	else
		i++;

}
if(str.length()!=0)
   cout<<str<<"\n";
else
	cout<<"Empty String"<<"\n";

}
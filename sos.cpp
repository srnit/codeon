#include<bits/stdc++.h>
using namespace std;
int main()
{
	int count=0;
	string sos="SOS";
	string str;
	//cin>>n;
	cin>>str;
	int i=0;
	while(str[i])
	{
		if(str[i]!=sos[i%3])
			count++;
		i++;
	}
	cout<<count<<"\n";
}
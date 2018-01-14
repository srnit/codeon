#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	string str,str2;
	cin>>str;
	cin>>str2;
	int k= (str2[i] - str[i] + 26) % 26;
	bool flag=true;
	for(int i=0;i<str.lenght();i++)
	{
		if((str[i]+k)%26!=(str2[i]+k))
			
			{flag=flase;
				break;
			}
	}

    }
    if(flag)
    	cout<<k<<"\n";
    else
    	cout<<"-1\n";

}
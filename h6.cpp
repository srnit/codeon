#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	string str,str1;
	while(t--)
	{
		long long int masterresult,doctorresult=0;
		masterresult=doctorresult=0;
      cin>>str;
      cin>>str1;
      for(int i=0;i<str.length();i++)
      {
      	int check=0;
        for(int j=0;j<str1.length();j++)
        {
        	if(str[i]<=str1[j])
        	{
        		check++;
        		if(check)
        			break;
        	}
        }
        if(check)
        	masterresult=masterresult;
        else
        	masterresult++;
      }
      for(int i=0;i<str.length();i++)
      {
      	int check=0;
        for(int j=0;j<str1.length();j++)
        {
        	if(str[i]<str1[j])
        	{
        		check++;
        		if(check)
        			break;
        	}
        }
        if(check)
        	doctorresult++;
      }
      cout<<masterresult<<"\n";
      cout<<doctorresult<<"\n";


	}
}
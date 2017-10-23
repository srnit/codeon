#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		int n;
		//hash[10001]={0};
		int fre[10001]={0};
		cin>>str>>n;
		int check=0;
		for(int i=0;i<str.length();i++)
		{
           if(fre[str[i]-'a']!=0 && str[i-1]==str[i])
           	continue;

           else
           {
           	fre[str[i]-'a']+=1;
           //	hash[str[i]-'a']=i;
           }
           	//hash[str[i]-'a']
		}
		sort(fre,fre+10001);
		int count=0;
		for(int i=0;i<10001;i++)
		{
			if(fre[i]==n)
				count++;
		}
		cout<<count<<"\n";
	}
}
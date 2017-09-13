#include<bits/stdc++.h>
using namespace std;
int hasfun(char c)
{
  return (c-'a');
}
int main()
{
	int n;
	cin>>n;
	string s,t;
	
	while(n--)
	{
		int hash[100001]={0};
	int fre1[100001]={0};
	int fre2[100001]={0};
		int count=0;
		cin>>s;
		cin>>t;
		for(int i=0;s[i]!='\0';i++)
		{
           int index=hasfun(s[i]);
           hash[index]=(1);
           fre1[index]++;

		}
		for(int i=0;t[i]!='\0';i++)
		{
			int index=hasfun(t[i]);
			if(hash[index]==1)
			{
				if(fre1[index]<=fre2[index])
					count++;
				else
					fre2[index]++;
			}
			else
				count++;

		}
		cout<<2*count<<"\n";


	}

}
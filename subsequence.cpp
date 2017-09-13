#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	int k;
	int count[100001]={0};
	cin>>str;
	cin>>k;
	//sort(str.begin(),str.end());
	for(int i=0;i<str.length();i++)
	{
		int num=int(str[i]-'a');
		//cout<<num;
		count[num]+=1;
	}
	//int j=0;
	string str1;
	for(int i=0;i<str.length();i++)
	{
		
		int num=int(str[i]-'a');
		//cout<<count[num];
		if(count[num]>=k)
		{
			//char ch=str[i];
			str1+=(str[i]);
			//j++;
		}
	}
	cout<<str1<<"\n";

}
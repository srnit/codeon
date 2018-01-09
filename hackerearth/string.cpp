#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,x,y;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s>>x>>y;
		int arr[y-x+1]={0};
		int j=0;
		for(int i=x;i<=y;i++)
		{
			arr[j++]=s[i]-'a';
		}
		sort(arr,arr+y-x+1,greater<int>());
		for(int i=0;i<x;i++)
		{
			cout<<s[i];
		}
		for(int i=0;i<y-x+1;i++)
			cout<<char(arr[i]+'a');
		for(int i=y+1;i<s.length();i++)
			cout<<s[i];
         cout<<"\n";
	}
}
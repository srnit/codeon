#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	
	int arr[4];
	cin>>t;
	while(t--)
	{
		int fre[200]={0};
		string str;
		cin>>str;
		for(int i=0;i<str.length();i++)
		{
			fre[str[i]-'a']++;
		}
		 arr[0]=fre['r'-'a'];
         arr[1]=fre['u'-'a'];
		 arr[2]=fre['b'-'a'];
		 arr[3]=fre['y'-'a'];
		 sort(arr,arr+4);
		 cout<<arr[0]<<"\n";
	}
}
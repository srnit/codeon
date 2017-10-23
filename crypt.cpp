#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string x,y;
		long long int result,result1;
		result=result1=0;
		cin>>x>>y;
		for(int i=0;i<x.length();i++)
		{
			result+=pow(2,int(x[i]-'A'));
		}
		for(int i=0;i<y.length();i++)
		{
			result1+=pow(2,int(y[i]-'A'));
		}
		
		cout<<result<<" "<<result1<<"\n";
	}
}
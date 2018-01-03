#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	int arr[1001];
	
	cin>>t;
	while(t--)
	{
		int check=0;
		int hash[101]={0};
		int r,c,d;
		cin>>r>>c>>d;
		for(int i=0;i<r*c;i++)
		{
			cin>>arr[i];
			hash[arr[i]]++;
		}
		for(int i=1;i<d;i++)
		{
			if(hash[i]%r!=0)
			{
				check=1;
				break;
			}
		}
		if(check==1)
			cout<<"no\n";
		else
			cout<<"yes\n";
	}
}
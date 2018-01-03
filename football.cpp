#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	
	cin>>t;
	while(t--)
	{
		cin>>n;
		int hash[n+1]={0};
		string s;
		int arr[n+1];
		for(int i=0;i<n;i++)
		{
			cin>>s;
			arr[i]=int(s-'a');
			hash[arr[i]]++;

		}
		int max=0;
		int check=0;
		for(int i=0;i<n;i++)
		{
			//cin>>s[i];
			if(hash[arr[i]]>max && i==0)
			{
				max=arr[i];
			}
			else if(hash[arr[i]]==max)
			{
               check=max;

			}

		}
		if(check==max)
			cout<<"Draw\n";
		else
		cout<<char(max+'a')<<"\n";

	}
}
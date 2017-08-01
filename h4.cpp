#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,result,t,q;
	
	cin>>n;
	long long int b[n];
	long long int c[n];
	for(int i=1;i<=n;i++)
	{
		cin>>b[i];

	}
	for(int i=1;i<=n;i++)
	{
		cin>>c[i];

	}
	cin>>q;
	while(q--)
	{
		result=0;
		cin>>t;
		//result+=c[t];
		for(long long int i=t;i<=n;i++)
		{
			
			if(b[t]>=b[i])
			{
				result+=c[i];
			}
			else
				break;
		}
		cout<<result<<"\n";
	}
	
}
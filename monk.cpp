#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,x,y,count=0;
	cin>>t;
	while(t--)
	{
		count=0;
		cin>>n;
		int vec[n];
		//memset(buy,0,sizeof(buy));
		//int vec[n][n];
		memset(vec,0,sizeof(vec));
		for(int i=1;i<=n;i++)
		{
			cin>>x>>y;
			vec[x]=1;
			vec[y]=1;

		}
		for(int i=1;i<=n;i++)
		{
			if(vec[i]==1)
				count++;
		}
		cout<<count<<"\n";
	}
}
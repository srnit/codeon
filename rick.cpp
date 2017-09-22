#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		int fre[500001]={0};
		cin>>n;
		int dist[n+1];
		int count=0;
		for(int i=0;i<n;i++)
		{
			cin>>dist[i];
			if(dist[i]==1)
				count++;
			else
			fre[dist[i]]++;
		}
		if(count>=2)
		{
			cout<<"Goodbye Rick\n";
			cout<<count-1<<"\n";
		}
		else
		{
			int check=0;
			for(int i=0;i<n;i++)
			{
				if(fre[dist[i]]>dist[i])
				{
					cout<<"Goodbye Rick\n";
			       cout<<fre[dist[i]]-dist[i]<<"\n";
			       check=1;
			       break;
				}
			}
			if(check==0)
				cout<<"Rick now go and save Carl and Judas\n";
		}
	}

}
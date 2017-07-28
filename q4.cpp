#include <bits/stdc++.h>
#include <vector>
/*
4 4    
1 2 1
1 4 4
1 3 5
4 2 2
*/
using namespace std;

vector<int> q1[2][100000];
long long int a[100000]={999},b[100000]={0};

void dfs(long long int s)
{
	b[s]=1;
	cout<<"s="<<s<<" "<<b[s]<<endl;
	for(int i=0;i<q1[0][s].size();i++)
	{	cout<<b[s]<<" ss "<<a[s]<<" "<<a[q1[0][s][i]]<<" "<<q1[0][s][i]<<" -- "<<q1[1][s][i]<<" "<<(a[s]+q1[1][s][i]) << endl;
		if(b[i]==0)
		{
			if( (a[s]+q1[1][s][i]) < a[q1[0][s][i]])
			{	

				a[q1[0][s][i]]=(a[s]+q1[1][s][i]);
				

			}
			b[s]=1;
			//dfs(q1[0][s][i]);
		}
		
	}
}

int main()
{
	long long int n,m,t1,t2,c;

	cin>>n>>m;
	for(int i=0;i<=n;i++)
		{a[i]=99999;b[i]=0;}
	for(int i=1;i<=m;i++)
	{
		cin>>t1>>t2>>c;
		q1[0][t1].push_back(t2);
		q1[0][t2].push_back(t1);
		q1[1][t1].push_back(c);
		q1[1][t2].push_back(c);
	}
	cout<<"xxx"<<endl;
	for(int i=1;i<=n;i++)
	{
		//cout<<i<<endl;
		cout<<i<<" "<<a[i]<<endl;
	}
	cout<<"xxx";
	int s;

	cin>>s;
	a[s]=0;b[s]=1;
	dfs(s);	

	for(int i=1;i<=n;i++)
	{
		cout<<i<<" "<<a[i]<<" "<<b[i]<<endl;
	}	
}
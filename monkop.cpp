#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	long long int c,r,ri,rr,v1,v2,v3,v4;
	c=r=rr=ri=0;
	cin>>n>>m;
	long long int matrix[n+1][m+1];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>matrix[i][j];
		}
	}
	cin>>v1>>v2>>v3>>v4;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			r+=abs(matrix[i][j]);
			ri+=abs(matrix[i][j]+v1);
			rr+=abs(v2);

		}
	}
	r=max(r,max(rr,ri));
	//cin>>n>>m;
	c=rr=ri=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			c+=abs(matrix[j][i]);
			ri+=abs(matrix[j][i]+v3);
			rr+=abs(v4);

		}
	}
	c=max(c,max(rr,ri));
	cout<<max(r,c)<<"\n";
  }
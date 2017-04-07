#include<bits/stdc++.h>
using namespace std;
//void query1(int num,int vec[][]);
//void update1(int vec[][],int n);
int main()
{

	int n,num,query;
	char ch;
	cin>>n;
	int vec[n+1][n+1];
	memset(vec,-1,sizeof(vec));
	for(int i=1;i<=n-1;i+=1)
	{
		cin>>num;
		if(num==1)
		{
			vec[i][i+1]=1;
			//vec[i].push_back(i+1);
		}
		else if(num==0)
			vec[i+1][i]=0;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
		  cout<<vec[i][j]<<" ";	
		}
		cout<<"\n";
	}
	cin>>query;
	while(query--)
	{
		cin>>ch;
		if(ch=='Q')
		{
			 ch>>num;
			int i1,j1,count;
	i1=num;
	j1=num+1;
	count=0;
	while(j1<=n)
	{
		if(vec[i1][j1]==1)
		{
			count++;
			i1++;
			j1++;
		}
		else
			break;
	}
	cout<<count<<"\n";
			//query1(num,vec);
		}
		else if(ch=='U')
		{
			for(int i=1;i<=n;i++)
	     {
		for(int j=1;j<=n;j++)
		{
			if(vec[i][j]==1)
				vec[i][j]=0;
			else if(vec[i][j]==0)
				vec[i][j]=1;
			//update1(vec,n);
		}


	}
}
}
}


/*void query1(int num,int vec[][])
{
	int i,j,count;
	i=1;
	j=2;
	count=0;
	while(1)
	{
		if(vec[i][j]==1)
		{
			count++;
			i++;
			j++;
		}
		else
			break;
	}
	cout<<count<<"\n";
}
void update1(int vec[][],int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(vec[i][j]==1)
				vec[i][j]=0;
			else if(vec[i][j]==0)
				vec[i][j]==1

		}
	}
}
*/
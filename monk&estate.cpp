#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,v,u;
	cin>>t;
	int arr[1001][1001];
	bool colour[1001];
	//memset(arr,0,sizeof(arr));
	//memset(colour,false,sizeof(colour));
	/*for(int i=0;i<10;i++)
	{
		for(int j=0;j<2;j++)
			cout<<arr[i][j];
		cout<<"\n";
	}
	*/
	while(t--)
	{
		memset(arr,0,sizeof(arr));
	    memset(colour,false,1001*sizeof(colour));
		int result=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>v>>u;
			arr[v][u]=1;
			arr[u][v]=1;
			if(colour[u]==false)
			{
				result++;
				colour[u]=true;
			}
			
		    if(colour[v]==false)
		    {
		    	result++;
		    	colour[v]=true;

		    }
		}
		cout<<result<<"\n";


	}
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int arr[n+1];
		int count[n+1];
		memset(count,0,sizeof(count));
		int j,num=0;
		j=num=0;
		for(int i=0;i<n;i++)
		{
			if(i==0)
			{
				cin>>arr[i];
			}
			else
			{
				

				cin>>arr[i];
				if(arr[i-1]<=arr[i])
				{
					for( j=num;j<i;j++)
					{
					    if(arr[j]<=arr[i] && count[j]==0)
					    {
				    	arr[j]=arr[i];
					 //cout<<arr[j]<<" ";
					 count[j]=1;
					 
					    }
					
				  }
				  num=i;
				  //cout<<j<<" ";
				}
			}
		}
		//cout<<arr[0]<<"\n";
     for(int i=0;i<n;i++)
     {
     	if(count[i]==1)
     		cout<<arr[i]<<" ";
     	else
     		cout<<"-1"<<" ";
     }
     
     cout<<"\n";

	}

}
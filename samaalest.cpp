#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,k,count=0,result;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		int arr[n+1];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		result=0;
		int i,check=0;
		for(i=0;i<n;i++)
		{
			count++;
		    if(arr[i]!=arr[i+1])
				{
					result=count;
					count=0;

				}
			if(result==k)
			 	{check=1;
			 		break;
			 		}

		}
		if(check==1)
		cout<<arr[i]<<"\n";
	    else
	    	cout<<"-1\n";
	}
}
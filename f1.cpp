#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	long long int  arr[3],sum;
	sum=0;
	cin>>t;
	while(t--)
	{
		sum=0;
		for(int i=0;i<3;i++)
			cin>>arr[i];
		sort(arr,arr+3);
		if(arr[0]!=0)
		{
		sum+=2*arr[0];
		arr[2]-=arr[0];
		sort(arr,arr+3);
		//cout<<arr[1]<<arr[2];
		if(arr[1]>0)
        { sum+=2*arr[1];
        	cout<<sum<<"\n";
        }
     else
     	cout<<sum<<"\n";

		
	}
	else
		cout<<2*arr[1]<<"\n";
		

	}
}
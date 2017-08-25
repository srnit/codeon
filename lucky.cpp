#include<bits/stdc++.h>
using namespace std;
#define max 1000000001
int main()
{
	int t,n,min;
	int arr[100001];
	
	cin>>t;
	while(t--)
	{min=max;
		int fre[100001]={0};
		int arr[100001];
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			fre[arr[i]]+=1;
			if(arr[i]<=min)
				min=arr[i];
		}
		cout<<min;
		if(fre[min]%2!=0)
			cout<<"Lucky"<<"\n";
		else
			cout<<"UnLucky"<<"\n";
	}
}
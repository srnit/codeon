#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,t;
	int arr[100001];
	int duumy[100001];
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(int i=0;i<n;i++)
			cin>>arr[i];
			k=k%n;
        for(int i=n-k;i<n;i++)
        	cout<<arr[i]<<" ";
        for(int i=0;i<n-k;i++)
        	cout<<arr[i]<<" ";
        cout<<"\n";
	}
}
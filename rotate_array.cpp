#include<bits/stdc++.h>
using namespace std;
int reverse(int arr[],int l,int r)
{
	int s=l;
	int end=r-1;
	int temp;
	while(s<=end)
	{
		temp=arr[s];
		arr[s]=arr[end];
		arr[end]=temp;
		s++;
		end--;
	}
	//cout<<"gh";
	
}
int rotate(int *a,int *b,int n,int r)
{
	int temp[n];
	for(int i=0;i<n-r;i++)
	{
      temp[i]=a[i];
	}
	for(int i=n-r;i<n;i++)
		temp[i]=b[i];
	reverse(temp,0,n);
	for(int i=0;i<n;i++)
	{
		cout<<temp[i]<<" ";
	}
		cout<<"\n";
}

int main()
{
	int t,n,r;
	cin>>t;
	while(t--)
	{
		cin>>n>>r;
		int arr[n];
		int A[n];
		int B[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		for(int i=0;i<n-r;i++)
			A[i]=arr[i];
		
		for(int i=n-r;i<n;i++)
			B[i]=arr[i];
		
		reverse(A,0,n-r);
	
		
		reverse(B,n-r+1,n);
		
		rotate(A,B,n,r);
		
	}
}
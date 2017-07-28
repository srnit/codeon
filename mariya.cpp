#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int arr[n+1],min_result,max_result;
	max_result=min_result=0;
	long long int max=0,min=99999999999999;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
		if(arr[i]>max)
		{
			max=arr[i];
			max_result++;
		}
		  if(arr[i]<min)
		 {
		 	min=arr[i];
		 	min_result++;
		 }
	}
	cout<<max_result-1<<" "<<min_result-1<<"\n";
}
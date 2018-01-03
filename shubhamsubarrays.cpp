#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n+1];
	int hash[n+1]={0};
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
		hash[arr[i]]++;
	}
	long long int result=0;
	long long int total=0;
 int count=0;
	for(int i=1;i<=n;i++)
	{
		if(hash[i]!=0)
		{
			count++;
			
				
					result++;

					
			
		
		}
	}
	while(result)
	{
		total+=(result*(result-1))/2;
			result--;
	}
	cout<<total+count<<"\n";
}
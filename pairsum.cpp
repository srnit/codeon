#include<bits/stdc++.h>
using namespace std;
long long int hashfun(long long int num)
{
	return num%599;
}

int main()
{
	int n,k,index;
	int fre[1000001]={0};
	cin>>n>>k;
	int arr[n+1];
	vector<long long int>vec[1000];
	//cout<<"vv";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		fre[arr[i]]++;
		index=hashfun(arr[i]);
		//cout<<"vv\n";
		vec[index].push_back(arr[i]);

	}
	//cout<<"vv";
	int check=0;
					//cout<<"vv";

	for(long long int i=0;i<n;i++)
	{
	  fre[arr[i]]--;
		 long long int checkpoint=k-arr[i];
		if(checkpoint==arr[i] && fre[arr[i]]>=1 )
		{
			check=1;
			break;
		}
						


		else
		{
			//cout<<"vv";
			index=hashfun(checkpoint);
			for(long long int i=0;i<vec[index].size();i++)
			{
				//cout<<"vv";
				if( vec[index][i]==checkpoint )
					{
					check=1;
						break;
					}
			}
		}
	}
	if(check==1)
		cout<<"YES\n";
	else
		cout<<"NO\n";



}
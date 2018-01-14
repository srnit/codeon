#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k,num;
	vector<long long int>vec;
	cin>>n>>k;
	//long long int n,k;
	for (long long int i=0;i<n;i++)

	{
		cin>>num;
		vec.push_back(num);

	}
	sort(vec.begin(),vec.end(),greater<long long int>());
	for(long long int i=0;i<n;i++)
	{
		if(k%vec[i]==0)
		{
			cout<<k/vec[i]<<"\n";
			break;
		}
	}
}
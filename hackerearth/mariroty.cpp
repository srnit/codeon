#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int n;
	cin>>n;
	long int arr[n+1];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	vector<long int> count[3];
	long int occur=0;
    long int i,j;
    j=0;
    i=0;
    while( j<=n && i<=n)
    {
    	if(arr[j]==arr[i])
    	{
    		occur++;
    		//count[arr[i]]++;
    		i++;
    	}
    	else if(arr[i]!=arr[j])
    	{
    		count[arr[j]].push_back(occur);
    		j=i;
    		//i++;
    		occur=0;

    	}
    }
    sort(count[0].begin(),count[0].end(),greater<long int>());
    long int res1=count[0][0];
     sort(count[1].begin(),count[1].end(),greater<long int>());
    long int res2=count[1][0];
    cout<<max(res1,res2)<<"\n";
    


}
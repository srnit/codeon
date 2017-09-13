#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,g,q;
	cin>>n;
	int arr[n+1];
	int hash[10001]={0};
	for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			hash[abs(10-arr[i])]++;

		}
	cin>>q;
	int result=0;
     int arr1[100001],value;
     char c;
	while(q--)
	{
		int hash1[10001]={0};
		int num,check=0;
		int i=0;
      
		do
		{
			scanf("%d%c", &arr1[i], &c);
			//arr1[i]=int(c);
			hash1[abs(10-arr1[i])]++;
			i++;
		}while(c!='\n');
		//cout<<"fhh\n";
		
		for(int i=0;i<n;i++)
		{
			if(hash[arr[i]]==1 && hash1[arr[i]]==0)
			{
				check=1;
				break;
			}
		}
		if(check==0)
		{
			result++;
		}

	}
	cout<<result<<"\n";


}
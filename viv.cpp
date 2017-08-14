#include<bits/stdc++.h>
using namespace std;
int find(vector<int> &vec,int num,int n)
{
	int check,set;
	set=0;
	sort(vec.begin(),vec.end());
	for(int i=0;i<n;i++)
	{
		check=num-vec[i];

		if(binary_search(vec.begin(),vec.end(),check))
		{
			set=1;
			break;
		}
		//cout<<arr[i]<<" \n";
		//cout<<check<<"\n";
		/*for(int j=0;j<n;j++)
		{
			//cout<<arr[j]<<"\n";
			if(check==arr[j] && i!=j)
			{
				set=1;
				//return 1;
		     break;
			}
		}*/
		//if(set==1)
		//	break;
	}
	cout<<set<<"\n";
}
int main()
{
	int n,num,ele;

	cin>>n;
	vector<int> arr;
	
	for(int i=0;i<n;i++)
		{
			cin>>ele;
			arr.push_back(ele);
		}
	cin>>num;
	find(arr,num,n);
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	int arr[50][50];
	while(t--)
	{
		cin>>n;
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
				cin>>arr[i][j];
		}
	
	int s,l,check;
    s=0;
    l=n-1;
    check=0;
   // cout<<"NO\n";
  // i=0;
	while(s<=l)
	{
		for(int i=0;i<n;i++)
		{
			//cout<<arr[s][i]<<" "<<arr[l][i]<<"\n";
       if(arr[s][i]!=arr[l][i])
       	 {
       	 	check=1;
       	 	break;
       	 }
       	}
       	if(check==1)
       		break;
       	 s++;
       	 l--;

	}
	if(check==1)
	cout<<"NO\n";
 else
 {
 	 s=0;
    l=n-1;
    check=0;
    while(s<=l)
	{
		for(int i=0;i<n;i++)
		{
       if(arr[i][s]!=arr[i][l])
       	 {
       	 	check=1;
       	 	break;
       	 }
       	}
       	if(check==1)
       		break;
       	 s++;
       	 l--;

	}
	if(check==1)
	cout<<"NO\n";
 else
 	cout<<"YES\n";
   
 }
}
}
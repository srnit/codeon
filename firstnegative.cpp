#include<bits/stdc++.h>
using namespace std;
void fneg(int arr[],int n,int k)
{
	queue<int>q;
	int count=0;
	for(int i=0;i<k;i++)
		q.push(arr[i]);
	int i=k;
	int check=0;
    while(i<=n-1)
    {
    	int x=q.front();
    	cout<<x<<"\n";
   count=q.size();
    	q.pop();
    	
    	
    	//cout<<"pushed"<<"-->"<<arr[i]<<"\n";
    	q.push(arr[i++]);

    	if(x<0 && count<=k && check==1)
    	{
           cout<<x<<" "<<x<<" ";
           check=0;
           count=0;
    	}
    	else if(x<0 && count<=k)
    	{
    		cout<<x<<" ";
    		count=0;
    	}
    	else if(x>0 && count<=k)
    		{
              check=1;
    		}
    	else if(count>=k)
    		{cout<<"0"<<" ";
    	     count=0;}
    	
    }

}
int main()
{
	int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int arr[n+1];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		cin>>k;
		fneg(arr,n,k);

	}
}
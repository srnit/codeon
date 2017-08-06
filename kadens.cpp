#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,a[300];
	cin>>t;
	while(t--)
	{
		
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];
		int cur_max=a[0];
		int max_sofar=a[0];
        for(int i=1;i<n;i++)
        {
        	cur_max=max(cur_max,cur_max+a[i]);
        	if(cur_max>max_sofar)
        		max_sofar=cur_max;
       
	}
	 cout<<max_sofar<<"\n";
}
}
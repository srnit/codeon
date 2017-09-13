#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	int arr[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int l=1;
	int ini=0;
	int ine=0;
	int end=n-1;
	int check=0;
	int count=0;
	int check1=0;
	int costs,costl,result=0;
	costl=costs=0;
	int i=0;
	while(end!=l)
	{
		if(check==0)
		{
			if(arr[i]==1)
			{
			costs=abs(l-ini);
			
			costl=abs(end-ini);
			//ine=end;
			result+=min(costs,costl);
			if(costl<costs)
                ini=end;
            else
            	ini=l;

			count++;
			check=1;
		}
		else
		{
          costs=abs(l-ini)*(count*k);
			ini=l;
			costl=abs(end-ine)*(count*k);
			ine=end;
			result+=min(costs,costl);
			count++;
		}
		if(count==m)
           {
            check1=1;
           break;

            }
		
	}
	l++;
		end--;
		i++;
	}
	if(check1==1)
		cout<<result<<"\n";
	else
	{
		if(arr[i]==1)
		{
	  costs=abs(l-ini)*(count*k);
	   ini=l;
	   result+=costs;
	   i++;
	   l++;
	   }	
	}
}
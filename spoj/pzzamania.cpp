#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{ ll n,m,num,t,first,end,count;
	
	cin>>t;
	while(t--)
	{
		
		cin>>n>>m;
		ll arr[n];
		for(ll i=0;i<n;i++)
		{
			cin>>arr[n];
			//vec.push_back(num);
		}
		sort(arr,arr+n);
		count=0;
		 //if(vec[i]>m)
			//break;
			for( ll i=n;i>=2;i--)
        {
            first=0,end=i-1;
            while(first<end)
            {
            if(arr[first]+arr[end]==m)
            {
                count++;
            }
            else if(arr[first]+arr[end]>m)
                end=end-1;
            else if(arr[first]+arr[end]<m)
            	first++;
            }
            //scanf("%d",&n);
        }
		}
		cout<<count<<"\n";
	}

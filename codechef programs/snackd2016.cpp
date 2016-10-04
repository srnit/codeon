#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<ll> maxsub(vector<ll>a,ll size)
{
	ll max_so_far=0,max_ending_here=0;
	for(ll i=0;i<size;i++)
	{
		//cout<<v[i];
		max_ending_here=max_ending_here+a[i];
		if(max_ending_here<0)
			max_ending_here=0;
		if(max_so_far<max_ending_here)
			max_so_far=max_ending_here;
	}
	return max_so_far;
}
int main()
{ ll n;
	vector<ll>sum(1);
	int t;
	cin>>t;
	while(t--)
	{
		sum=0;
	cin>>n;
	vector<ll>a(n),da(n);
	for(ll i=0;i<n;i++)
	{ 
		
		cin>>a[i];
		sum+=a[i];
	}
	vector<ll>s(1),b(1),sum1(1);
	s[0]=sum1[0]=0;
	if(n==2)
	{ int i=0;
		if(a[i]==a[i+1]&&sum<a[i])
			sum[0]=a[i];
		 else if(a[i]>a[i+1]&&sum<a[i])
		 	sum[0]=a[i];
		 else if(a[i+1]>a[i]&&sum<a[i+1])
                 sum[0]=a[i+1];
             cout<<sum<<"\n";
            
	}
	else
	{
	s=maxsub(a,n);
	if(sum<s)
		sum=s;
	
    for(int i=0;i<n;i++)
   {
      b[i]=a[i];
   }
   
    b=maxsub(a,n-1);
    if(sum<b)
    	sum=b;
    if(sum<sum1)
    	sum=sum1;
    cout<<sum<<"\n";
}
   
    
}	
}


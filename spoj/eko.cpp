#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int  binary_search(vector<ll> &v,ll num,ll low,ll high)
{
	ll mid;
	int check;
	check=0;
	while(high>=low)
	{
		mid=(high+low)/2;
       //cout<<mid<<"\n";
		if(v[mid]==num){
			check=1;
			break;
		}
		else if(v[mid]>num)
			high=mid-1;
		else if(v[mid]<num)
			low=mid+1;
	}
	return check;
}
int main()
{

	ll n,k,search,count,num;
	cin>>n>>k;
	count=0;
	vector<ll>v;
	for(int i=0;i<n;i++)
	{
		cin>>num;
		v.push_back(num);
     }
     sort(v.begin(),v.end());
    /* for(ll i=0;i<n;i++)
     {
     	cout<<v[i]<<" ";
     }
     */
     for(ll i=0;i<n;i++)
     {
       search=v[i]+k;
       //cout<<search<<v[n-1]<<"\n";
       if(search<=v[n-1]){
        if(binary_search(v,search,0,n-1))
        {
       	count++;
       	//cout<<count<<"\n";
       }
   }
   else
   	break;
       
     }
     cout<<count<<"\n";
}
#include<bits/stdc++.h>
using namespace std;
typedef  long long int ll;
ll binary_search(vector<ll> &vec,ll low,ll high,ll a,ll b)
{
	ll mid,num;
	ll check=0;
	num=a+b;
	while(high>=low)
	{
		mid=(high+low)/2;
		//cout<<"low"<<low<<"\n";
		//cout<<"high"<<high<<"\n";
		//cout<<"mid"<<mid<<vec[mid]<<"\n";

		if(vec[mid]==num)
		{
			check+=high-mid;
			break;
		}
		else if(vec[mid]>num)
			{
				check+=1+high-mid;
				high=mid-1;
				//if(vec[mid-1]<num)
					//break;
			}
		else if(vec[mid]<num)
			low=mid+1;
    }
   // cout<<check;
    return check;
}
int main()
{
	ll n,num,a,b,result,count;
	vector<ll>v;
	while(1)
	{
	cin>>n;
	v.clear();
	if(n==0)
		break;
	for(ll i=0;i<n;i++)
	{
		cin>>num;
         v.push_back(num);

	}
	//sort(vec.begin(),vec.end());
	//for(ll i=0;i<n;i++)
	//{
		//cout<<vec[i]<<" ";
	//}
	//cout<<"\n";
	set<ll> s( v.begin(), v.end() );
v.assign( s.begin(), s.end() );
	sort(v.begin(), v.end());
//vector<int>::iterator it;
//it = unique(v.begin(), v.end());  

//v.resize(distance(v.begin(),it)); 
n=v.size();
//cout<<n<<" ";
	result=0;
	for(ll i=0;i<n;i++)
	{ count=0;
		a=v[i];
		for(ll j=i+1;j<n;j++)
		{
		b=v[j];
		//if(b==v[j-1])
			//continue;
		count=binary_search(v,0,n-1,a,b);
		if(count==0)
			break;
		else
			result+=count;
		}
	}
	cout<<result<<"\n";

}
}
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
/*int binary_search(vector<ll> &vec,ll low,ll high,ll num)
{ ll check=0,mid;;
while(high>=low)
{
mid=low+(high-low)/2;
//cout<<mid<<" "<<"\n";
if(vec[mid]==num)
    {
     check=1;
     break;
    }
 else if(vec[mid]>num)
      high=mid-1;
  else if(vec[mid]<num)
     low=mid+1;
}
if(check==1)
return mid;
else 
return check;
}*/
int main()
{ ll n,m,num,t,count1,search,found,check,end,begin;
	vector<ll>vec;
	cin>>t;
	while(t--)
	{
		
		scanf("%lld%lld",&n,&m);
		vec.clear();
		for(ll i=0;i<n;i++)
		{
			scanf("%lld",&num);
			vec.push_back(num);
		}
		sort(vec.begin(),vec.end());
              // for(ll i=0;i<n;i++)
                //cout<<vec[i]<<" ";
		count1=0;
                check=0;
		end=n-1;
                begin=0;
                while(end>begin)
                {
                 if(vec[end]+vec[begin]==m)
                   {
                     count1++;
                     end--;
                     }
                 else if(vec[end]+vec[begin]>m)
                    end--;
                   else if(vec[end]+vec[begin]<m)
                     begin++;
                  
                 }
		printf("%lld\n",count1);
	}
     
}

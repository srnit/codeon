#include<iostream>
#include<vector>
#include<math.h>
typedef long long int ll;
using namespace std;
int main()
{
vector<ll>v;
ll n,x,y,max,s;
cin>>n;
max=0;
while(n--)
{
	//cout<<max<<" ";
	cin>>x>>y;
 
	v.push_back(x);
	v.push_back(y);
	 s=v.size();
	if(v.size()==2)
		cout<<"0"<<"\n";
	else
	{
		for(ll i=0;i<v.size()-2;i+=2)
		{
			//cout<<v[i]<<" "<<v[i+1]<<" "<<v[s-2]<<" "<<v[s-1]<<"\n";
           
          
          	if(pow(v[s-2]-v[i],2)+pow((v[s-1])-(v[i+1]),2)>=max)
          		max=pow(v[s-2]-v[i],2)+pow((v[s-1])-(v[i+1]),2);
         
		}
		cout<<max<<"\n";
	}
}
}

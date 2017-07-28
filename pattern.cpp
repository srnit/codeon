#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
    {
    ll n,sum_max,sum_min,num;
    sum_max=sum_min=0;
    vector<ll>arr;
    for(ll i=0;i<5;i++)
        {
        cin>>num;
        arr.push_back(num);
    }
    sort(arr.begin(),arr.end());
    for(ll i=1;i<5;i++)
        sum_max+=arr[i];
    for(ll i=0;i<4;i++ )
        sum_min+=arr[i];
    cout<<sum_min<<" "<<sum_max;
}
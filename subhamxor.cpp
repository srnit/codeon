#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll result=0;
	int n;
	scanf("%d",&n);
	ll arr[n+1];
	ll hash[n+1]={0};
	for(int i=0;i<n;i++)
		
	{scanf("%lld",&arr[i]);
      hash[arr[i]]++;
}
for(int i=0;i<n;i++)
{
	if(hash[i]>1)
		result++;
}
printf("%lld\n",result);
	
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	long long int s[n];
	long long int d[n];
	long long int result=0;
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&s[i]);
	}
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&d[i]);
	}
	sort(s,s+n);
	sort(d,d+n);
	for(int i=0;i<n;i++)
	{
		result+=abs(s[i]-d[i]);
	}
	printf("%lld\n",result);
}
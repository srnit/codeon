#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,count;
count=0;
	cin>>i;
	while(i>=0)
	{
	i=(i&(i+1))-1;
	cout<<i<<"\n";
	count++;
}
cout<<count<<"\n";
}
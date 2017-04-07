#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,degree,check,num;
	cin>>n;
  check=0;
	while(n--)
	{
		cin>>num;
		if(num==1 || num==0)
			check=1;
	}
	if(check==1)
		cout<<"Yes"<<"\n";
	else
		cout<<"No"<<"\n";
}
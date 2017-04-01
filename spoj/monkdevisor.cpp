#include<bits/stdc++.h>
using namespace std;
int main()
{long int n,t,element;
 cin>>n;
 vector<long int>v;
 vector<string>check(n+1,"false");
 for(long int i=0;i<n;i++)
{  cin>>element;
 	v.push_back(element);
}
cin>>t;
while(t--)
{
	long int p,q;
	int count=0;
	cin>>p>>q;
	for(long int j=0;j<n;j++)
	{
		if(check[j]=="false")
		{
			if((v[j]%p==0 || v[j]%q==0) || (v[j]%p==0 && v[j]%q==0))
				count++;
		}
	}
	cout<<count<<"\n";

}

}
#include<bits/stdc++.h>
//#define max 1000000
using namespace std;
int main()
{
	int n,q,l,r,k;
	string s;
	cin>>n>>q;
	cin>>s;
	cout<<s;
	while(q--)
	{
		cin>>l>>r>>k;
		int hash[r-l+1]={0};
		
		int j=1;
		for(int i=l-1;i<r;i++)
			{
				//cout<<s[i]<<"\n";
				//cout<<int(s[i]-'a'+1)<<" ";
				hash[j++]=int(s[i]-'a'+1);
			}
		sort(hash,hash+(r-l+1));
		//for(int i=1;i<=r-l+1;i++)
		//cout<<hash[i]<<"\n";
	//cout<<hash[k];
		if(hash[k]!=0 && k<r-l+1)
			cout<<char(hash[k]+'a'-1)<<"\n";
		else
			cout<<"Out of range\n";



	}
}
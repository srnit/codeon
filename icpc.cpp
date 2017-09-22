#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,k;
	cin>>t;
	
	while(t--)
	{
		int fre[1001]={0};
		int check=0;
		string str;
		cin>>n>>k;
		while(n--)
		{
			cin>>str;
			fre[str.length()]++;
		}

		for(int i=0;i<1001;i++)
		{
          if(fre[i]!=0)
          {
          	if(fre[i]%k==0)
          		check=1;
          	else
          	{
          		cout<<"Not possible\n";
          		check=0;
          		break;
          	}

          }
		}
		if(check==1)
			cout<<"Possible\n";


	}

}
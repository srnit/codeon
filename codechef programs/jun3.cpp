#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	int t,c,j;
	j=c=0;
	cin>>a>>b;
	for(int i=0;a[i]!='\0';i++)
	{ j++;
		if(a[i]==b[i])
			c++;
	}
    if(j%2!=0)
    {
    	if(c%2==0)
    	{
    		cout<<"lucky chef"<<"\n";
    		cout<<c<<"\n";
    	}
    	else if(c%2!=0)
    	{
    		cout<<"lucky chef"<<"\n";
    		cout<<c-1<<"\n";
    	}
    }
}
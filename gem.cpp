#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,result=0;
cin>>n;
string str[n];
for(int i=0;i<n;i++)
{
	cin>>str[i];
}
//cout<<str[0][0]<<"\n";
//cout<<str[0]<<"\n";
//cout<<str[0].find(str[0][0]);
for(int i=0;i<str[0].length();i++)
{
	int count=0;
	for(int j=1;j<n;j++)
	{
		//cout<<str[j]<<" "<<str[0][i]<<"\n";
		int check=str[j].find(str[0][i]);
		//if(check==0)
		//	check=1;
		if(check !=string::npos)
	       {  count++;
	       	//cout<<"yes\n";
	       }
	}
	//cout<<count<<"\n";
	if(count==n-1)
		result++;
}
	cout<<result<<"\n";

}
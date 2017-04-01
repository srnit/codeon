#include<bits/stdc++.h>
using namespace std;
long long int rev(long long int l)
{
	long long int rev_num=0;
	while(l>0)
	{
		rev_num=rev_num*10+l%10;
		l=l/10;

	}
	//cout<<rev_num;
	return rev_num;
}
int main()
{
 long long int t,n;
 cin>>t;
 while(t--)
 {
 	cin>>n;
 	while(1)
 	{
 	if(n==rev(n))
 {		cout<<n<<"\n";
break;
}
 	n++;
 }
 }
}
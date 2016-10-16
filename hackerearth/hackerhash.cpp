#include<bits/stdc++.h>
using namespace std;
long int roll_num;
 string name;
typedef map<long int,string> hash1;
int main()
{
	int t,q;
hash1 hash;
 cin>>t;
 while(t--)
 {
 cin>>roll_num>>name;
 hash[roll_num]=name;
}
cin>>q;
while(q--)
{
	cin>>roll_num;
	cout<<hash[roll_num]<<"\n";
}
}
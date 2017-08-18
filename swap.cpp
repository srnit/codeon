#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,z;
	cin>>x>>y>>z;
	x=x^y^z;
	y=x^y^z;
	z=x^y^z;
	x=x^y^z;
	cout<<x<<y<<z;
}
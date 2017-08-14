#include<bits/stdc++.h>
using namespace std;
int fib(int num)
{
	//cout<<num<<" ";
	if(num==0 || num==1)
		return 1;
	if(num==2)
		return fib(num-1);
	else
		return(fib(num-1)+fib(num-2));
}
int main()
{
	int n;
	cin>>n;
	cout<<fib(n)<<"\n";
}
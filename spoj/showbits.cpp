#include<bits/stdc++.h>
using namespace std;
void showbits(int num)
{ 
	int andmask,k;
	for(int i=7;i>=0;i--)
	{

		andmask=1<<i;
		k=num & andmask;
		k==0 ? printf("0"):printf("1");
	}
}
int main()
{
	int num;
	cin>>num;
	showbits(num);
}
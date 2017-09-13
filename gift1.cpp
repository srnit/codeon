#include<bits/stdc++.h>
using namespace std;
int isprime(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int n,num,result,result1;
	cin>>n;
	num=n;
	result1=result=0;
	
	 if(n==0)
		cout<<"2\n";
	if(n==1)
		cout<<"1\n";
	else if(isprime(n))
		cout<<"0\n";
	else
	{
		int temp=n;
		while(1)
		{
			if(isprime(n))
			{
				result=n;
				break;
			}
			if(isprime(temp))
			{
				result1=temp;
				break;
			}
			temp--;
			n++;


		}
		//cout<<result1<<" "<<result;
		cout<<min(abs(result-num),abs(result1-num))<<"\n";
	}

}

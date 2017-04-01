// C program to calculate Euler's Totient Function
#include <bits/stdc++.h>
using namespace std;

int phi(int n)
{ 
	int result = n; 
	
	for (int p=2; p*p<=n; ++p)
	{
		
		if (n % p == 0)
		
		result -= result / p;
		
			while (n % p == 0)
				n /= p;
			
	}

	
	if (n > 1)
		result -= result / n;
	return result;
}


int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    cout<<phi(n)<<"\n";
	}
	}


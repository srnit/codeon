#include <bits/stdc++.h>
using namespace std;
#define N 1000000

static int factorCount[N+1];

int main()
{
    int i, j,t,n,k;

    for (i = 0; i <= N; i++) {
        factorCount[i] = 0;
    }

    for (i = 2; i <= N; i++) {
        if (factorCount[i] == 0) { // Number is prime
            for (j = i; j <= N; j += i) {
                factorCount[j]++;
            }
        }
    }
    cin>>t;
    while(t--)
    {
    	cin>>n>>k;
    	if(factorCount[n]==k)
    		cout<<"YES\n";
    	else
    		cout<<"NO\n";
    }
}

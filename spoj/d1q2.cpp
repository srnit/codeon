#include<bits/stdc++.h>
using namespace std;
void SieveOfEratosthenes(int n)
{
	int check=0;
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
   
    //else
    //{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
 
    // Print all prime numbers

    for (int p=2; p<=n; p++)
    {
       if (prime[p] && check==0 )
      {    cout << 2*p << " ";
  check=1;
                       }
                       else if(prime[p] && check==1)
                       {
                       	cout<<3*p<<" ";
                       	check=0;
                       }
    }
//}
cout<<"\n";
}
int main()
{
long long int t,count,loop;
float n;
cin>>t;
while(t--)
{
	cin>>n;
	SieveOfEratosthenes(n);

 }
 

}	


#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(int argc, char const *argv[])
{
	ll n,c,f,t,cf,ct,ft,cft;
	cin>>n>>c>>f>>t>>cf>>ct>>ft>>cft;
	cout<<n-((c+f+t)-cf-ct-ft+(3*cft))<<"\n";
	
	return 0;
}
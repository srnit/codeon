#include<bits/stdc++.h>
using namespace std;
int main()
{long long int t;
cin>>t;
while(t--)
{long long int result;
result=0;
long long int  n;
cin>>n;
result=(n*(n+2)*(2*n+1))/8;
cout<<result<<"\n";
}
}

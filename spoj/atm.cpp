#include<bits/stdc++.h>
using namespace std;
long long int main()
{long long int withdrow;
  double balance;
cin>>withdrow>>balance;
if(withdrow%5==0 && withdrow+0.50<=balance)
{
balance-=withdrow+0.50;
}
cout<<fixed<<setprecision(2)<<balance<<"\n";
}

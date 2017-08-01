#include <iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
       if(n%3==0 || n%3==2)
       	cout<<n/3<<"\n";
       else if(n%3==1)
       	ccout<<(n/3)-1<<"\n"

    }
    return 0;
}

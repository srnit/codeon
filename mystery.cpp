#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,t,sum=0;
    cin>>t;
    while(t--)
    {
        sum=0;
    cin>>num;
    
    for(int i=1;i*i<=num;i++)
    {
        if(num%i==0)
        {
            sum++;
            
           
        }
    }
    int x=sqrt(num);
    cout<<x<<" ";
    if(x*x==num)
    cout<<2*sum-1<<"\n";
    else
    cout<<2*sum<<"\n";
    
}
}

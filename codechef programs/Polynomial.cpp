//#include<stdio.h>
#include<bits/stdc++.h>
//#define M 786433
long long int fast_pow(long long base, long long n,long long M) 
{
    if(n==0)
       return 1;
    if(n==1)
    return base;
    long long halfn=fast_pow(base,n/2,M);
    if(n%2==0)
        return ( halfn * halfn ) % M;
    else
        return ( ( ( halfn * halfn ) % M ) * base ) % M;
}
int findMMI_fermat(int n,int M)
{
    return fast_pow(n,M-2,M);
}
int main()
{
long long int M=786433;
long long int result;
long long int n,q,x,i,p,pa;
//long long int a[];
scanf("%lld",&n);
long long int a[n+1];
//a=(long int *)malloc(n*sizeof(long int));
//a=new long int(n);
for(i=0;i<=n;i++)
{
scanf("%lld",&a[i]);
}
scanf("%lld",&q);
while(q--)
{
result=0;
scanf("%lld",&x);
for(i=0;i<=n;i++)
{
p=fast_pow(x,i,M);
p=p%M;
pa=(a[i]*p)%M;
result=(result%M+pa%M)%M;

}
printf("%lld\n",result);
}
}

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll maxsub(ll a[],ll size)
{
	ll max_so_far=0,max_ending_here=0;
	for(int i=0;i<size;i++)
	{
		//cout<<v[i];
		max_ending_here=max_ending_here+a[i];
		if(max_ending_here<0)
			max_ending_here=0;
		if(max_so_far<max_ending_here)
			max_so_far=max_ending_here;
	}
	return max_so_far;
}
ll delete1(ll a[],ll pos,ll size)
{
	for(int c=pos-1;c<size-1;c++)
		a[c]=a[c+1];
   
}
int main()
{
 ll t,n;
 ll q0,q1,q2,q3,q4;
cin>>t;
 while(t--)
 {
 	ll sum=0;
 cin>>q0>>q1>>q2>>q3>>q4;
 n=q0;
 ll *a=(ll *)malloc(n*sizeof(ll));
 for(ll i=0;i<n;i++)
 {
 	cin>>a[i];

 }
 ll l=n;
 for(ll i=0;i<l;i++)
 {
 	if(a[i]==q1)
 	{
      delete1(a,i+1,l);
      l--;
 	}
 	else if(a[i]==q2)
 	{
 		 delete1(a,i+1,l);
      l--;
 	}
 	else if(a[i]==q3)
 	{
 		 delete1(a,i+1,l);
      l--;
 	}
 	else if(a[i]==q4)
 	{
 		 delete1(a,i+1,l);
      l--;
 	}
   //n--;
 }
sum=maxsub(a,l);
cout<<sum<<"\n";

 
}

}
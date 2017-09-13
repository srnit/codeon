/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*You need to complete this function */
#include<bits/stdc++.h>
using namespace std;
int bin_search(int A[], int left, int right, int k)
{
    int mid, check=0;
    while(left<=right)
    {
      mid=(left+right)/2;
      //cout<<"mid"<<mid<<"\n";
      //cout<<A[mid]<<"\n";
     if(A[mid]==k)
       {
          check=1;
          break;
       }
     else if(A[mid]>k)
     {
         right=mid;
         
     }
     else if(A[mid]<k)
    
    { 
        left=mid;
    }
     
    }
    if(check==1)
    return mid;
    else
    return -1;
}
int main()
{
 int t,n,k;
 cin>>t;
 while(t--)
 {
  cin>>n>>k;
  int arr[n+1];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  sort(arr,arr+n);
  cout<<bin_search(arr,0,n-1,k)<<"\n";
 }

}
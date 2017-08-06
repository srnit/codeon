/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/



/*You are required to complete this function */
#include<bits/stdc++.h>
using namespace std;
int remove_duplicate(int A[],int N)
{
//Your code here
int temp[100]={0};
int check[100]={0};
int j=0;
for(int i=0;i<N;i++)
{
   // cout<<check[A[i]]<<" ";
    if(check[A[i]]==0)
    {
    if((A[i]==A[i+1]) && (check[A[i]]==0) )
    {
        check[A[i]]=1;
        temp[j]=A[i];
        //cout<<temp[j]<<" ";
        j++;
        
    }
    else
    {
        check[A[i]]=1;
        temp[j]=A[i];
        //cout<<temp[j]<<" ";
       j++;   
    }
    }
    
    
}
for(int i=0;i<j;i++)
{
    if(check[A[i]]==1)
    cout<<temp[i]<<" ";
}
cout<<"\n";
return 1;
}
int main()
{int t,a[100],n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        remove_duplicate(a,n);
    }
}
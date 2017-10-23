#include<bits/stdc++.h>
using namespace std;
long long Merge(long long Left[],long long Right[],long long arr[],long long nL,long long nR){
long long i=0,j=0,k=0,inv=0;

while(i<nL && j<nR){
if(Left[i]<=Right[j]){
arr[k++]=Left[i++];
}
else{
arr[k++]=Right[j++];
inv+=(nL-i);
}
}

while(i<nL){
arr[k++]=Left[i++];
}

while(j<nR){
arr[k++]=Right[j++];
}
return inv;
}
long long MergeSort(long long arr[],long long n){
if(n<2) return 0;
long long mid=n/2;
long long nL=mid;
long long nR=(n-mid);
long long Left[nL],Right[nR];
for(int i=0;i<nL;i++) Left[i]=arr[i];
for(int i=nL;i<n;i++) Right[i-mid]=arr[i];

long long x=MergeSort(Left,nL);
long long y=MergeSort(Right,nR);

long long z= Merge(Left,Right,arr,nL,nR);
return x+y+z;
}
long long arr[5000005];
int main()
{
long long n;
while(scanf("%lld",&n)==1){
if(n==0) break;
for(int i=0;i<n;i++) scanf("%lld",&arr[i]);
printf("%lld\n",MergeSort(arr,n));
}
return 0;
}

#include <iostream>
using namespace std;

int main() {
	
	int n,q,l,r;
	cin>>n;
	int arr[n+1];
	long long int result=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		result+=arr[i];
		arr[i]=result;
	}
	

	cin>>q;
	while(q--)
	{
		cin>>l>>r;
		if(l==0)
		cout<<arr[r]<<"\n";
		else
		cout<<(arr[r]-arr[l-1])<<"\n";
	}
	return 0;
}
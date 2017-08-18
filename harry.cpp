#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q,x;
	cin>>n;
	int arr[n+1];
	stack<long long int>st;
	string str;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cin>>q>>x;
	long long int result=0;
	int i=0;
	while(q--)
	{
		cin>>str;
		//cout<<result<<"\n";

		
		if(str=="Harry")
		{
			//cout<<arr[i];
			st.push(arr[i++]);
			result+=st.top();
            
		}
		if(str=="Remove")
		{
			result-=st.top();
			st.pop();
		}

	}
	//cout<<result<<"\n";
	if(result==x)
		cout<<st.size()<<"\n";
	else
		cout<<"-1"<<"\n";

}
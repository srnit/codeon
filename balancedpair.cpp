#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	stack<int>st;
	st.push(0);
	int result=0;
	int min=0;
	for(int i=1;i<=n;i++)
	{
		//cout<<"i->>"<<i<<"value at index"<<arr[i]<<"\n";
		if(arr[i]>0)
		{
			st.push(i);
		}
		else if(arr[i]<0 && st.top()==0)
			st.push(i);
		else if(arr[i]<0)
		{
			int index=st.top();
			//cout<<"index\n"<<index;
			st.pop();
			
			if(arr[index]==abs(arr[i]))
			{
				int temp=i-st.top();
				//cout<<"temp\n"<<temp;
				if(temp>result)
					result=temp;
			}
			else if(arr[index]!=arr[i]) 
			{
              st.push(i);
			}

		}
		
	}
	cout<<result<<"\n";
}
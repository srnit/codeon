#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,check,num;
	cin>>n;
	stack<int> st;
	st.push(-1);
	while(n--)
	{
		
		cin>>check;
		if(check==1)
		{
			if(st.top()==-1)
				cout<<"No Food\n";
			else
			{
				cout<<st.top()<<"\n";
				st.pop();
			}
		}
		else
		{
			cin>>num;
			st.push(num);
		}
	}
}
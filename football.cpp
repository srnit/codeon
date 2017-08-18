#include<bits/stdc++.h>
using namespace std;
stack <int>st;
int main()
{
	int t,p,ini,second,first,id;
	char c;
	
	cin>>t;
	while(t--)
	{
	  while(!st.empty())
		{	st.pop();
		}
		cin>>p>>ini;
		st.push(ini);
		while(p--)
		{
			cin>>c;
			if(c=='P')
			{
				cin>>id;
				st.push(id);
			}
			else
			{
				int second=st.top();

				st.pop();
				int first=st.top();
				st.pop();
				st.push(second);
				st.push(first);
			}
			
		}
		cout<<"Player "<<st.top()<<"\n";
			
	}
}
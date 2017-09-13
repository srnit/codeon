#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,check,check1,result=0;
	cin>>n;
	while(n--)
	{
		check=check1=0;
		string str;
		cin>>str;
		deque<char>st;
		
		while(!st.empty())
		  st.pop_back();
		if(!(str.length()%2))
		{
			check1=1;
			for(i=0;i<str.length();i++)
			{
			//	cout<<str[i]<<"\n";
				if(i==0)
					st.push_front(str[i]);

				 else if(st.back()==str[i])
				{
					//cout<<"back:"<<st.back()<<"\n";
					st.pop_back();
				}
				else  if(st.back()!=str[i] && st.front()==str[i])
				{
					check=1;
					break;
				}
				else
				{
					
					st.push_back(str[i]);
				}
			}

		}
		if(check==0 && check1==1 && st.size()==0)
			result++;
	}
	cout<<result<<"\n";
}
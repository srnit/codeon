#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,num;
	stack <int> s;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num;
		s.push(num);
	}
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}

}

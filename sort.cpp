#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,n;
	vector<int>vec;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num;
		vec.push_back(num);
	}
	sort(vec.rbegin(),vec.rend());
	for(vector<int>::iterator it=vec.begin();it!=vec.end();it++)
		cout<<*it<<" ";
}
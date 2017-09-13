#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,num,result,t;
	list<int>vec;
	cin>>t;
	while(t--)
	{
		result=0;
		vec.clear();
	
    cin>>n;
	for(int i=0;i<n;i++)
		{
			cin>>num;
			vec.push_back(num);
		}
	
	vec.unique();
	int p=1;
	for(int i=vec.size();i>0;i--)
	{
		result+=i*p;
		p++;
	}
	cout<<result<<"\n";

}
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,custmer,cost,pack;
   cin>>n;
   stack <int>st;
   //vector<int>vec[2];
   while(n--)
   {
   	cin>>custmer;
   	if(custmer==1)
   	{
     if(st.empty())
     	cout<<"No Food\n";
     else
     {
     	cout<<st.top()<<"\n";
     	st.pop();
     }
 }
     if(custmer==2)
     {
     	cin>>cost;
     	st.push(cost);
     }
   	}
   }

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,m,x,y,radius,eaten,result,px,py;

	cin>>t;
	while(t--)
	{
		result=0;
		cin>>n>>m;
		vector<int>v;
		while(n--)
		{
			//cin>>n>>m;
			cin>>x>>y>>radius>>eaten;
			if(eaten==1)
			{
				v.push_back(x);
				//v.push_back(x+radius);
				v.push_back(y);
				
				//v.push_back(y+radius);
			}
		}
		while(m--)
		{
			cin>>px>>py;
			for(int i=0;i<v.size()-1;i+=2)
			{
				//cout<<"hello\n";
				//cout<<v[i]<<" "<<v[i+1]<<" "<<v[i+2]<<" "<<v[i+3]<<"\n";;
				if((px>=v[i] && px<=v[i+1]) && (py>=v[i+2] && py<=v[i+3]))
				{
					result+=1;
					break;
				}
			}
		}
		cout<<result<<"\n";
	}
}
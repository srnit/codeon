#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,parent;
	cin>>n;
	vector<int>vec[n+3];
	for(int i=2;i<=n;i++)
	{
		cin>>parent;
		vec[parent].push_back(i);
	}
	int check=1;
	for(int i=1;i<=n;i++)
	{
       if(vec[i].size()>=3)
       {
          int deg=vec[i].size();
         // cout<<"deg--"<<deg<<"\n";
          for(int j=0;j<vec[i].size();j++)
          {
          	//cout<<"vec[i][j]----"<<vec[i][j]<<"\n";
          	if(vec[vec[i][j]].size()>0)
          	{
          		//cout<<"vec[vec[i][j]].size()--"<<vec[vec[i][j]].size()<<"\n";
          		deg--;
          		//cout<<"deg1--"<<deg<<"\n";
          	}
          }
          if(deg<3)
          {
          	check=0;
          	break;
          }


       }
       else if(vec[i].size()<3 && vec[i].size()>0)
       {
       	check=0;
       	break;
       }
	}
	if(check==0)
		cout<<"No\n";
	else
		cout<<"Yes\n";
}
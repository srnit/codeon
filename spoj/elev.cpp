#include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll f,s,g,u,d,cur;
void initialize(vector<ll> &v)
{
	for( ll i=0;i<v.size();i++)
	{
		v[i]=0;
	}
}
int main()
{
	cin>>f>>s>>g>>u>>d;
	vector<ll>v(f+1);
	initialize(v);
	queue<ll>q;
	v[s]=1;
	q.push(s);
	while(!q.empty())
	{
      cur=q.front();
      //cout<<cur<<"\n";
      q.pop();
      if(cur+u<=f && v[cur+u]==0)
      {
      	v[cur+u]=v[cur]+1;
      	q.push(cur+u);
      }
      if(cur-d>=1 && v[cur-d]==0)
      {
      	v[cur-d]=v[cur]+1;
      	q.push(cur-d);
      }

	}
	if(v[g]!=0)
		cout<<v[g]-1<<"\n";
	else
		cout<<"use the stairs"<<"\n";

	



}
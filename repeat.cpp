#include<bits/stdc++.h>
using namespace std;
int hash[1000];
int main()
{
 int t,n;
 cin>>t;
 queue<char>l;
 queue<char>q;
 while(t--)
 {
    memset(hash,0,sizeof(hash));
 	char ch;
 	cin>>n;
 	char arr[n];
 	for(int i=0;i<n;i++)
 	{
 		cin>>arr[i];
 		
 	}
 for(int i=0;i<n;i++)
 {
 	cout<<arr[i]<<" ";
 	
 		q.push(arr[i]);

 }
 cout<<"\n";
 
 while(!q.empty())
 {
     char ch=q.front();
     q.pop();
     hash[ch-'a']++;
 	 //if(l.si)
 		if(hash[ch-'a']==1 && l.size()==0)
 		{	cout<<ch<<" ";
 	      l.push(ch);
         }
 		else if(hash[ch-'a']==1 && l.size()!=0)
 		{
            cout<<l.front()<<" ";
 		}
 		else if(hash[ch-'a']!=1 && l.size()!=0)
 		{
 			cout<<"-1"<<" ";
 			l.pop();
 		}
 		//q.p
 }
 while(!q.empty() && !l.empty())
 {
 	l.pop();
 	q.pop();
 }

 cout<<"\n";
}
 
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	//cin>>t;
	scanf("%d",&t);
	while(t--)
	{ int n,k;
		int count=0;
		bool deletefr=false;
		int num;
		vector<int>vec;
		cin>>n>>k;
		//int popu[n+1];
		
		for(int i=0;i<n;i++)
		{
		    cin>>num;
		    vec.push_back(num);
		    
		}
		//vector<int>::iterator
        for(int i=0;i<n;)
        {
        	//cout<<i<<" "<<vec[i]<<" ";
        	
         
          if(vec[i]<vec[i+1])
          {
          	vec.erase(vec.begin()+i);
          	if(i==1)
          	 i=0;
          	 else
          	 i=i-1;
          	count++;
          	deletefr=true;

          }
          else if(vec[i]>vec[i+1])
          	i++;
          if(count==k)
          	break;

        }
        if(deletefr==false)
        {
        	for(int i=0;i<n-count;i++)
        	{
        		printf("%d",vec[i]);
        		printf(" ");
        	}
        }
        else
        {
        	for(int i=0;i<vec.size();i++)
        	{
        			printf("%d",vec[i]);
        		    printf(" ");
        	}
        }
        printf("\n");
	}
}
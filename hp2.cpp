#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,check,f,num,mid;
	vector<long long int> vec;
	cin>>n;
	 long long int result=0;
	for(long long int i=0;i<n;i++)
	{
		cin>>num;
		result+=num;
		vec.push_back(num);
	}
	check=result/n;
	sort(vec.begin(),vec.begin());
	for(int i=0;i<n;i++)
	{
	    if(vec[i]-check>0)
	   { cout<<vec[i]<<"\n";
	   break;
	   }
	    
	}
}
	
	
	//int start=0;
	//int end=n-1;
	//int c=0;
	/*
	while(start<=end)
	{
	    
	    mid=(start+end)/2;
	    if(vec[mid]==check)
	    {
	     cout<<vec[mid+1]<<"\n";
	     c=1;
	     break;
	    }
	    else if(vec[mid]<check)
	    {
	        end=mid;
	        start++;
	        
	    }
	    else if(vec[mid]>check)
	    {
	        start=mid+1;
	        end--;
	       
	    }
	    
	}
	
    if(c==0)
    cout<<vec[start]<<"\n";
}*/
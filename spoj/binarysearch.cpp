#include<bits/stdc++.h>
using namespace std;
int binary_search(vector <int> &a,int l,int h,int num)
{
	int mid,result;
	//cout<<mid<<" ";
	sort(a.begin(),a.end());
	//for(int i=l;i<=h;i++)
		//cout<<a[i]<<"\n";
 while(h>=l)
 { cout<<l<<" "<<h<<"\n";
 	mid=(h+l)/2;
 cout<<mid<<" "<<a[mid]<<"\n";
 	//cout<<a[mid]<<num<<"\n";
 	//cout<<mid;
 	
	if(a[mid]== num)
		{
                   result=mid;
cout<<result<<"\n";
                   break;
                }
//exit(1);
	else if(a[mid]>num)
		   h=mid-1;
	else if(a[mid]<num)
	      l=mid+1;
      else
        {
       result=-1;
        break;

        }
		
	
}
	return result;;
	
}
int main()
{ int t,n,num,num1,found;
	vector<int>a;
	cin>>t;
	while(t--)
	{ //found=0;
		cin>>n;
		//vector<int>a(n+1);
		a.clear();

		for(int i=0;i<n;i++)
		{
          cin>>num;
          a.push_back(num);
		}
		cout<<"number has to search"<<"\n";
		cin>>num1;
		if(found=binary_search(a,0,n-1,num1))
		cout<<found<<"\n";
		
	}

}

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	long long int t,n,m,x,y,result,result1,zeros,l,r,q,k,z,a,a1;
	long long int  prod,count5,count2;
	cin>>t;
	while(t--)
	{result1=0;
		k=z=1;
		cin>>n>>m;
		long long int v[1000],arr5[1000],arr2[1000];
vector<long long int> result;
		for(long long int i=1;i<=n;i++)
			{
				count5=count2=0;
				cin>>v[i];
               a=v[i];
               a1=v[i];
				while(a%5==0)
					{
						
						count5++;
					
						a/=5;
						//prod*=v[j];
					}
					arr5[z]=count5;
					z++;
					//cout<<count5<<" ";
					//long long int a1=v[j];
					while(a1%2==0)
					{  count2++;
							a1/=2;
							
					}
					arr2[k]=count2;
					k++;
                 
                  
			}
			 //for(int i=1;i<=k;i++)
				//	cout<<arr2[i]<<" ";
				//cout<<"\n";
				//for(int i=1;i<=z;i++)
			///		cout<<arr5[i]<<" ";
			///	cout<<"\n";

		while(m--)
		{ prod=r=0;
			count2=count5=0;
			cin>>q;
			
			if(q==2)
			{
				
				cin>>l>>r>>y;
				k=z=l;
				for(long long int j=l;j<=r;j++)
				{
					v[j]= (j- l + 1) * y;
					count2=count5=0;
					a=v[j];
					//cout<<v[j]<<" ";
					
					while(a%5==0)
					{
						
						count5++;
					
						a/=5;
						//prod*=v[j];
					}
					arr5[z]=count5;
					z++;
					//cout<<count5<<" ";
					 a1=v[j];
					while(a1%2==0)
					{  count2++;
							a1/=2;
							
					}
					arr2[k]=count2;
					k++;
				}
				//for(int i=1;i<=k;i++)
				//	cout<<arr2[i]<<" ";
				//cout<<"\n";
				//for(int i=1;i<=z;i++)
				//	cout<<arr5[i]<<" ";
				//cout<<"\n";

			}
			else if(q==1)
			{
              cin>>l>>r>>x;
               k=z=l;
              for(long long int j=l;j<=r;j++)
              {
              	v[j]=v[j]*x;
               count2=count5=0;
              long long int a=v[j];
					//cout<<v[j]<<" ";
					
					while(a%5==0)
					{
						
						count5++;
					
						a/=5;
						//prod*=v[j];
					}
					arr5[z]=count5;
					z++;
					//cout<<count5<<" ";
					long long int a1=v[j];
					while(a1%2==0)
					{  count2++;
							a1/=2;
							
					}
					arr2[k]=count2;
					k++;
				}
				//for(int i=1;i<=k;i++)
				//	cout<<arr2[i]<<" ";
				//cout<<"\n";
				//for(int i=1;i<=z;i++)
				//	cout<<arr5[i]<<" ";
				//cout<<"\n";

			}
			else if(q==3)
			{
				count2=count5=prod=0;
				cin>>l>>r;
				for(long long int j=l;j<=r;j++)
				{
				 count5+=arr5[j];
				 count2+=arr2[j];	
				//zeros=numberofzero1(prod);
				}
				if(count5<count2)
						prod+=count5;
					else
						prod+=count2;
					//cout<<prod<<"\n";
				result.push_back(prod);
                                 //r++;
				//cout<<result<<"\n";
			
 
		}
		
	}
      for(long long int i=0;i<result.size();i++)
{
     result1=result1+result[i];
	
}
cout<<result1<<"\n";
 }
}

					//cout<<count2<<" ";
					//prod*=v[

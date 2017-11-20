#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,q,x;
	cin>>t;
	double a[6];
	a[1]=1.50;
	 a[2]=3.00;
	 a[3]=5.50;
	 a[5]=11.42;
	  a[7]=18.15;
	  a[4]=6.00;

	double result;

	while(t--)
	{
		cin>>q;
		if(q==0)
			cout<<"0.00\n";
		else if(q==1)
		{
			cout<<"1.50\n";
		}
		else if(q==2)
		{
			cout<<"3.00\n";
		}
		else if(q==3)
			cout<<"5.50"<<"\n";
		else if(q==5)
			cout<<a[5]<<"\n";
		else if(q==7)
			cout<<a[7]<<"\n";
		else
		{
			//cout<<"hi\n";
			if(q%2==0)
			{

				x=q/2;
				
                   
				result=a[2]+a[x];
				printf("%.2f\n",result);
			}
			else if(q%3==0)
			{
				x=q/3;
				
				result=a[3]+a[x];
				printf("%.2f\n",result);
			}
			else if(q%5==0)
			{
				x=q/5;
				
				result=a[5]+a[x];
				printf("%.2f\n",result);
			}
			else if(q%7==0)
			{
				x=q/7;
				
				result=a[7]+a[x];
				printf("%.2f\n",result);
			}
		}
	}

}
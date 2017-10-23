#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,len;
	string str[1000000];
	cin>>n>>t;
	long long int arr[n+1];
	for(long long int i=0;i<n;i++)
	{
		cin>>str[i]>>arr[i];
	}
	for(long long int i=0;i<n;i++)
	{
		for(long long int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{

				long long int temp;
				string st;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				st=str[j];
				str[j]=str[j+1];
				str[j+1]=st;
			}
		else if(arr[j]==arr[j+1])
			{
				if(str[j].length()<=str[j+1].length())
					len=str[j].length();
				//cout<<len<<"\n";

				for(long long int i=0;i<len;i++)
				{
					//cout<<"yes\n";
					if(int(str[j][i])>int(str[j+1][i]))
					{
						//cout<<"yes\n";
						break;
				
					}
				else if(int(str[j][i])<int(str[j+1][i]))
					{
                      // cout<<"yes1\n";
				string st;
				
				st=str[j];
				str[j]=str[j+1];
				str[j+1]=st;
				break;
					}

				}
			}
		}
	}
	long long int i=n-1;
	while(t--)
	{
		cout<<str[i--]<<"\n";
	}


}
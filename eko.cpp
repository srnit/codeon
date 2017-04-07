#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int max = -1 , *vec;
	ll n,m,low,max_height,count,result,mid,temp,num;
 cin>>n>>m;
 vec = (int *) malloc ( n * sizeof(int) );

	for ( int i = 0 ; i < n ; i++ ) {
		scanf("%d" , &vec[i]);
		if ( vec[i] > max )
			max = vec[i];
	}

 //{
 	//cout<<vec[i]<<" ";
 //}
 low=0;
 max_height=max;

 while(low<=max_height)
 {
 	count=0;
 	mid=(low+max_height)/2;
 	//cout<<mid<<"\n";
 	for(int i=0;i<n;i++)
 	{
 		temp=vec[i]-mid;
       count += (temp > 0 ? temp : 0);

 	}
 	//cout<<count<<"\n";
 	if ( count == m) {
			result= mid;
			break;
		}
		else if ( count < m) {
			max_height = mid - 1;
		}
		else {
			low = mid + 1;
			
			if ( mid > result )
				result= mid;
		}
 }

cout<<result<<"\n";

}
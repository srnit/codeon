#include<bits/stdc++.h>
using namespace std;
// A function to print all prime factors of a given number n
int primeFactors(int n)
{int check,check1;
  check=check1=0;
    // Print the number of 2s that divide n
    while (n%2 == 0)
    {check+=1;
      //  printf("%d ", 2);
        n = n/2;
        if(check==1)
        {return 2;
           break;}

    }

    // n must be odd at this point.  So we can skip one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        // While i divides n, print i and divide n
        while (n%i == 0)
        {check1+=1;
          //  printf("%d ", i);
            n = n/i;
            if(check1==1 && check==0)
            {return i;
              break;}
        }
    }

    // This condition is to handle the case whien n is a prime number
    // greater than 2
    if (n > 2 && check==0 && check1==0)
        {return n;
          }
}
int get(int L,int R,int arr[])
{
int result = 1;
	for(int i=L;i<=R;i++)
		result = max(result, primeFactors(arr[i]));
	return result;
}
void update(int L,int R,int arr[]){
	for(int i=L;i<=R;i++)
  {int x=primeFactors(arr[i]);
    if(x!=0)
		arr[i] = arr[i] /x;
  }
  }
/* Driver program to test above function */
int main()
{int n,t,m,arr[1000001],l,r,querry;
  cin>>t;

  while(t--)
  {
    cin>>n>>m;
    vector<int>ans;
    for(int i=1;i<=n;i++)
    cin>>arr[i];

    for(int j=1;j<=m;j++)
    {
      cin>>querry>>l>>r;
      if(querry==1)
      {
        ans.push_back(get(l,r,arr));

      }
      if(querry==0)
      {
        update(l,r,arr);

      }
    }
    for(int j=0;j<ans.size();j++)
    cout<<ans[j]<<" ";
    cout<<"\n";

}
}

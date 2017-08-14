#include<bits/stdc++.h>
using namespace std;
void mostFreq3(int *a, int n, int b[3]) {

// Write your code here
// hint: sort a, find biggest 3 blocks
  int num[3]={0};
  int check[3]={0};
  for(int i=0; i<n; i++)
            {
                for(int j=i+1; j<n; j++)
                    {
                        if(a[i]>a[j])
                            {
                                int temp=a[i];
                                a[i]=a[j];
                                a[j]=temp;
                            }
                    }
                //cout << num[i] << "\n";
            }
  //cout<<"\n";

  int count=0;
  int j=0;
  //int max=0;
  for(int i=0;i<n;i++)
  {
    count++;
    if(a[i]!=a[i+1])
    {
       
        if(count>num[0])
        {
          num[2]=num[1];
          num[1]=num[0];
          num[0]=count;

        }
        else if(count>num[1])
          
          {num[2]=num[1];
        num[1]=count;
      }
      else
        num[2]=count;
     }
      //num[j]=count;
      check[j]=a[i];
      count=0;
      j++;
    }
  for(int i=0;i<3;i++)
    cout<<num[i]<<" ";
  int temp;
  for(int i=0; i<3; i++)
            {
                for(int j=i+1; j<=3; j++)
                    {
                        if(num[i]<num[j])
                            {
                                temp=check[j];
                                check[j]=check[i];
                                check[i]=temp;
                            }
                    }
                  }
  for(int i=0;i<3;i++)
    b[i]=check[i];
    

}
int main()
{
  int n;
  int a[100];
  int b[3];
  int i=0;

  cin >> n;
  for(i=0;i<n;i++){
    cin >> a[i];
  }

  mostFreq3(a,n,b);
        for(i=0; i<3; i++)
            cout << b[i] << " ";

  return 0;
}


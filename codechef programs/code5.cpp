#include<iostream>
using namespace std;
int main()
{
    int test,pies,i,j,count=0,temp;
    scanf("%d",&test);
    while(test--)
    {
                scanf("%d",&pies);
                int pie[pies],rack[pies];
                for(i=0;i<pies;i++)
                scanf("%d",&pie[i]);
                for(i=0;i<pies;i++)
                scanf("%d",&rack[i]);
                for(i=0;i<(pies-1);i++)
                  {
                     for(j=i+1;j<pies;j++)
                     {
                         if(pie[i]>pie[j])
                         {
                            temp=pie[i];
                            pie[i]=pie[j];
                            pie[j]=temp;
                         }
                     }
                  }
                  for(i=0;i<(pies-1);i++)
                  {
                     for(j=i+1;j<pies;j++)
                     {
                         if(rack[i]>rack[j])
                         {
                            temp=rack[i];
                            rack[i]=rack[j];
                            rack[j]=temp;
                         }
                     }
                  }
                 for(i=0;i<pies;i++)
                 {
                    for(j=0;j<pies;j++)
                    {
                                      if(pie[i]<=rack[j])
                                      {
                                                        rack[j]=0;
                                                        count++;
                                                        i++;
                                      }
                    }
                 }
                cout<<count<<endl;
                count=0;
                
    }
    return 0;
}
 

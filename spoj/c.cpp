#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    int c; 
    long long int ans;
    scanf("%d %d",&n,&c);
    int crate[c][2];
    for(int crate_i = 0; crate_i < c; crate_i++){
       for(int crate_j = 0; crate_j < 2; crate_j++){
          
          scanf("%d",&crate[crate_i][crate_j]);
       }
    }
    
  /*  for(int crate_i = 0; crate_i < c; crate_i++){
       //for(int crate_j = 0; crate_j < 2; crate_j++){
          
         // scanf("%d",&crate[crate_i][crate_j]);
       //}
        if(crate[crate_i][1]>=crate[crate_i+1][1])
            {
            
        }
         else
           crate[crate_i+1][1]=crate[crate_i][1] ;
            
    }
   */
    for(int crate_i = 0; crate_i < c-1; crate_i++){
       for(int crate_j = 0; crate_j < c-1; crate_j++){
          
           if(crate[crate_j][1]<crate[crate_j+1][1])
            {
               int a,b;
               a=crate[crate_j][1];
               b=crate[crate_j][0];
               
               crate[crate_j][1]=crate[crate_j+1][1];
               crate[crate_j][0]=crate[crate_j+1][0];
               
               crate[crate_j+1][1]=a;
               crate[crate_j+1][0]=b;
           }
       }
    }
    
     for(int crate_i = 0; crate_i < c && n>0; crate_i++){
       
       if(n>=crate[crate_i][0])  
           {
           ans+=(n-crate[crate_i][0])*crate[crate_i][1];
           n=n-crate[crate_i][0];
       }
         else
         {
             ans+=(n)*crate[crate_i][1];
           n=0;
         }
     }
    printf("%lld",ans);
    // your code goes here
    return 0;
}

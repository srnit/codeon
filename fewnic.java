import java.util.*;
import java.io.*;
public class fewnic
{ 
public static void main (String args[])
{ int t,n,count,check,i;
  Scanner in = new Scanner(System.in);
  String l,l1,l2,l3,l4;
  t=in.nextInt();
  while(t>0)
  {
    l=new String("");
  l4=new String("");
  l1=in.nextLine();
  l2=in.nextLine();
  l3=in.nextLine();
 n=in.nextInt();
    //long long int count ,check;
    check=count=0;
    System.out.println(n);
    
    while(n>0)
    {
        l4=l4+l2;
        n--;
    }
    l=l1+l4+l3;
    //l=l+l3;
   // cout<<l<<"\n";
    System.out.println(l);
    for( i=l.length()-1;i>=0;i=i-1)
    {
        //cout<<"h"<<"\n";
        if(l.charAt(i)=='0')
            check=1;
      if(l.charAt(i)=='1' && check==1)
            count++;
    }
    System.out.println(count);
    t--;
  }


}
}

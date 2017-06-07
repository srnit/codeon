import java.math.BigInteger;
import java.util.Scanner;
import java .io.*;
class test
{
public int  numberofzero1(BigInteger prod)
{
	BigInteger zero,check;
	check=new BigInteger("0");
	int count=0;
	BigInteger bigInt=new BigInteger("10");
	while(prod.compareTo(check)!=0)
	{
		
		zero=prod.mod(bigInt);
		//System.out.println(zero);
		if(check.compareTo(zero)==0)
			count++;
		else 
			break;
		prod=prod.divide(bigInt);


	}
	return count;
}
}
 class bigq extends test{
	public static void main (String args[])
	{
		bigq obj=new bigq();
		Scanner in = new Scanner(System.in);
		int t,n,m,x,y,result,zeros,l,r,q;
		BigInteger prod;
		t=in.nextInt();
		while(t!=0)
		{
			result=0;
		n=in.nextInt();
		m=in.nextInt();
		int v[]=new int[n+1];
		for(int i=1;i<=n;i++)
			v[i]=in.nextInt();
		while(m!=0)
		{ prod=new BigInteger("1");
			
			q=in.nextInt();
			if(q==2)
			{
				l=in.nextInt();
				r=in.nextInt();
				y=in.nextInt();
				for(int j=l;j<=r;j++)
				{
					v[j]= (j- l + 1) * y;
				}
			}
			else if(q==1)
			{
              //cin>>l>>r>>x;
				l=in.nextInt();
				r=in.nextInt();
				x=in.nextInt();
              for(int j=l;j<=r;j++)
              	v[j]=v[j]*x;
			}
			else if(q==3)
			{
				//cin>>l>>r;
				l=in.nextInt();
				r=in.nextInt();
				//y=in.nextInt();
				for(int j=l;j<=r;j++)
				{
					prod=prod.multiply(BigInteger.valueOf(v[j]));
					//System.out.println(prod);
				}
				zeros=obj.numberofzero1(prod);
				result+=zeros;
			}
          m=m-1;
		}
		System.out.println(result);
		t=t-1;
		}

	}
}

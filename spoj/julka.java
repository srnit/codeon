import java.math.BigInteger;
import java.io.*;
import java.util.*;
class julka
{
public static void main(String args[])
{
Scanner input=new Scanner(System.in);
//String apples,Excess_apples;
for(short t=0;t<10;t++)
{
 //apples=input.nextLine();
 //Excess_apples=input.nextLine();
 BigInteger apples1=new BigInteger(input.nextLine());
 BigInteger excess_apples1=new BigInteger(input.nextLine());

BigInteger klutia=apples1.add(excess_apples1).divide(BigInteger.valueOf(2));
BigInteger natalia=apples1.subtract(excess_apples1).divide(BigInteger.valueOf(2));
BigInteger test=klutia.add(natalia);
//if(test==apples1)
//{
System.out.println(klutia);
System.out.println(natalia);
//}
}
}
}

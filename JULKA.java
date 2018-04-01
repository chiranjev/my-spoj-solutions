import java.lang.*;
import java.util.Scanner;
import java.math.BigInteger;

class Main {
    public static void main(String args[] ) throws Exception {

        Scanner sc=new Scanner(System.in);
        BigInteger total,more,k,n;
        int i=0;
        while(i++<10)
        {
           total = sc.nextBigInteger();
           more = sc.nextBigInteger();

           n = total.subtract(more);
           n = n.divide(BigInteger.valueOf(2));
           k = n.add(more);
           System.out.println(k);
           System.out.println(n);
        }
    }
}

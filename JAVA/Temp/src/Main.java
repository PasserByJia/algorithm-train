import java.util.Scanner;
import java.util.Vector;
import java.net.*;
public class Main{
    public static void main(String[] args){ 
        System.out.println(f(11,13));  
    }
    public static int f(int n, int m)
	{
		n = n % m;	
		Vector v = new Vector();
		
		for(;;)
		{
			System.out.println(n);
			v.add(n);
			n *= 10;
			n = n % m;
			if(n==0) return 0;
			if(v.indexOf(n)>=0)  return v.size() ;  //���
		}
	}
}
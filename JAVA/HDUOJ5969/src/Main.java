import java.util.*;
import java.math.*;
public class Main {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		long x = input.nextInt();
		long y = input.nextInt();
		System.out.println(x|y);
	}
//		Scanner input = new Scanner(System.in);
//		long n = input.nextInt();
//		for(long i=0;i<n;i++) {
//			long r = input.nextLong();
//			long l = input.nextLong();
//			String sl = Long.toBinaryString(l);
//			String s = "";
//			String s2="1";
//			for(long j =1;j<sl.length();j++) {
//				if(sl.charAt((int)j)=='1') {
//					s+="0";
//				}else {
//					s+="1";
//				}
//				s2+="1";
//			}
//			//System.out.println(sl);
//			//System.out.println(" "+s);
//			BigInteger bi;
//			long b;
//			if(s.length()!=0) {
//				 bi = new BigInteger(s, 2);
//				 b = bi.longValue();
//			}else {
//				b =l;
//			}
//			//System.out.println(b);
//			if(r==l) {System.out.println(r);}
//			else if(b<r) {
//				//System.out.println("???");
//				long max = -1000;
//				for(long j=r;j<l;j++) {
//						long x = j|l;
//						if(x>max) max=x;
//				}
//				System.out.println(max);
//			}else{
//				BigInteger res = new BigInteger(s2,2);
//				System.out.println(res.longValue());
//			}
//		//	System.out.prlongln(x);
//			
//		}
//		//String result = Integer.toBinaryString(n);
//	}
}

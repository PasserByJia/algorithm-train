import java.util.*;
import java.math.BigInteger;
public class Main {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		long startTime=System.currentTimeMillis(); 
		String s = input.next();
		long n = input.nextInt();
		long ans=0;
		String dive = s.charAt(0)+"";
		for(int i=1;i<s.length();i++) {
			long temp = Integer.parseInt(dive);
			if(temp/n==0) {
				dive+=s.charAt(i);
			}else {
				ans*=10;
				ans+=(temp/n);
				dive = temp%n+"";
			}
		}
		System.out.println(ans);
		long endTime=System.currentTimeMillis(); //获取结束时间
		System.out.println("程序运行时间： "+(startTime-endTime)+"ms");
	}
}

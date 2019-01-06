import java.math.BigInteger;
import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		BigInteger m = input.nextBigInteger();
		System.out.println(res(m,m.subtract(BigInteger.ONE)));
	}
	public static BigInteger maxCommonDivisor(BigInteger m, BigInteger n) {
        if ((m .mod(n)).compareTo(BigInteger.ZERO) == 0) {// 若余数为0,返回最大公约数  
            return n;  
        } else { // 否则,进行递归,把n赋给m,把余数赋给n  
            return maxCommonDivisor(n, m.mod(n));  
        }  
	}
	//最小公倍数等于两数之积除他们的最大公约数
	public static BigInteger minCommonMultiple(BigInteger m, BigInteger n) {  
	        return (m.multiply(n)).divide(maxCommonDivisor(m, n));  
	}
	
	public static BigInteger res(BigInteger m,BigInteger n) {
		if(n.compareTo(BigInteger.ONE)==0){
			return m;	// n到最后
		}else{
			m = minCommonMultiple(m, n);	// 得到最小公倍数
			return res(m,n.subtract(BigInteger.ONE));
		}
	}
}

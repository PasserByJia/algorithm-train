import java.math.BigInteger;
import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		BigInteger m = input.nextBigInteger();
		System.out.println(res(m,m.subtract(BigInteger.ONE)));
	}
	public static BigInteger maxCommonDivisor(BigInteger m, BigInteger n) {
        if ((m .mod(n)).compareTo(BigInteger.ZERO) == 0) {// ������Ϊ0,�������Լ��  
            return n;  
        } else { // ����,���еݹ�,��n����m,����������n  
            return maxCommonDivisor(n, m.mod(n));  
        }  
	}
	//��С��������������֮�������ǵ����Լ��
	public static BigInteger minCommonMultiple(BigInteger m, BigInteger n) {  
	        return (m.multiply(n)).divide(maxCommonDivisor(m, n));  
	}
	
	public static BigInteger res(BigInteger m,BigInteger n) {
		if(n.compareTo(BigInteger.ONE)==0){
			return m;	// n�����
		}else{
			m = minCommonMultiple(m, n);	// �õ���С������
			return res(m,n.subtract(BigInteger.ONE));
		}
	}
}

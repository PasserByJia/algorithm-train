import java.math.BigInteger;
 
public class Main {
    public static void main(String[] args) {
        BigInteger a = BigInteger.ONE; //1
        BigInteger b = BigInteger.ONE;
        BigInteger res = BigInteger.ZERO;   //0
        BigInteger TEN = BigInteger.TEN;   //10
        for (int i = 0; i < 10000; i++) {  
            if (i == 0 || i == 1) {
                res = BigInteger.ONE;
            }
            res = b.add(a); 
            a = b;
            b = res;
        }
        //ģ���������
        for (int i = 0; i < 102; i++) {
            BigInteger ans = a.divide(b);
            //�������䣬������=����*10
            a = (a.mod(b)).multiply(TEN);
            if (i!=0) {  //ֻ��������101λС�����Ա���������
                System.out.print(ans);    
            }
        }
        System.out.println();
    }
}
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int n1 ;
		int n2 ;
		while(input.hasNext()){
			 n1 = input.nextInt();
	         n2 = input.nextInt();
	         System.out.println(get_lcm(n1,n2));
		}
	}
	
	// 最大公约数
    public static int get_gcd(int a, int b) {
        int max, min;
        max = (a > b) ? a : b;
        min = (a < b) ? a : b;

        if (max % min != 0) {
            return get_gcd(min, max % min);
        } else
            return min;

    }

    // 最小公倍数
    public static int get_lcm(int a, int b) {
        return a * b / get_gcd(a, b);
    }

}

import java.util.*;
public class Main {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int n  = input.nextInt();
		ac(n);
	}
	
	public static void ac(int n) {
		if(n==0) {
			System.out.print(0);
			return ;
		}
		for(int i=0;i<=31;i++) {
			if(Math.pow(2, i+1)>n) {
				if(i==1) {
					System.out.print(2);
				}else {
					System.out.print("2(");
					ac(i);
					System.out.print(")");
				}
                if(n-Math.pow(2, i)>0) {
                	System.out.print("+");
                	ac((int)(n-Math.pow(2, i)));
                }
                break;
			}
		}
		
	}
}

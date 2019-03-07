import java .util.Scanner;
public class Main {
	public static void main(String args[]) {
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		int m=n;
		while(n>=3) {
			m+=(n/3);
			int l = n%3;
			n/=3;
			n+=l;
		}
		System.out.println(m);
	}
}

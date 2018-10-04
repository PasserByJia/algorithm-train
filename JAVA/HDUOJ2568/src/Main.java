import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		for(int i=0;i<n;i++) {
			int m = input.nextInt();
			int count =0;
			while(m!=0) {
				if(m%2!=0) {
					m-=1;
					count++;
				}else {
					m/=2;
				}
			}
			System.out.println(count);
		}
	}
}

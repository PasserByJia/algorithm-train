import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int l = input.nextInt();
		int n = input.nextInt();
		int p ,max=0,min=0;
		for(int i =0;i<n;i++) {
			p = input.nextInt();
			max =Math.max(max,Math.max(p, l-p+1));
			min =Math.max(min,Math.min(p, l-p+1));
		}
		System.out.println(min+" "+max);
	}
}

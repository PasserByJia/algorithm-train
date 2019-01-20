import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		double r =2.5;
		while(true) {
			double x = input.nextDouble();
			System.out.println(x*(1-x)*r);
		}
		
	}
}

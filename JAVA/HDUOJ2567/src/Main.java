import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner input =  new Scanner(System.in);
		int n = input.nextInt();
		for(int i=0;i<n;i++) {
			 String s1= input.next();
			 String s2= input.next();
			 StringBuilder sb = new StringBuilder(s1);
			 sb.insert(s1.length()/2, s2);      
			 s1 = sb.toString();        
			 System.out.println(s1);
		}
	}
}

import java.util.*;
public class Main {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String s = input.nextLine();
		String ss[] = s.split(" ");
		for(int i=ss.length-1;i>=0;i--) {
			System.out.print(ss[i]);
			if(i!=0)System.out.print(" ");
		}
	}
}

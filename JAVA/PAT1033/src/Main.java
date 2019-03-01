import java.util.*;
public class Main {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String s1 = input.nextLine();
		String s2 = input.nextLine();
		for(int i=0;i<s2.length();i++) {
			if(s1.indexOf(s2.charAt(i))==-1 && s1.indexOf(Character.toUpperCase(s2.charAt(i)))==-1){
				System.out.print(s2.charAt(i));
			}
		}
	}
}

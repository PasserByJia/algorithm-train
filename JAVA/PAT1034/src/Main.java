import java.util.*;
public class Main {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String s1 = input.nextLine();
		String s2 = input.nextLine();
		int yes =0,no = 0;
		for(int i=0;i<s2.length();i++) {
			int index =s1.indexOf(s2.charAt(i));
			if(index!=-1) {
				s1 = s1.substring(0, index)+s1.substring(index+1);
				yes++;
			}else {
				no++;
			}
		}
		if(yes==s2.length())System.out.println("Yes "+s1.length());
		else System.out.println("No "+no);
	}
}

import java.util.*;
public class Main {
	public static int[] ch = new int[100];
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String s1 = input.next();
		String s2 = input.next();
		for(int i=0;i<s2.length();i++) {
			int cha = s1.charAt(i);
			if(ch[cha]==0) {
				ch[cha] = (int)(s2.charAt(i));
				int flag =0;
				for(int j=0;j<i;j++) {
					if(ch[s1.charAt(j)]==ch[cha]) {
						System.out.println("Failed");
						return;
					}
				}
			}else {
				int a = ch[cha];
				int b = (int)(s2.charAt(i));
				//System.out.println(a+" "+b);
				if(a!=b) {
					System.out.println("Failed");
					return;
				}			
			}	
		}
		for(int i=65;i<=90;i++) {
			//System.out.println(ch[i]);
			if(ch[i]==0) {
				//System.out.println(i);
				System.out.println("Failed");
				return;
			}
		}
		String s3 = input.next();
		String s4="";
		for(int i =0;i<s3.length();i++) {
			int chs = s3.charAt(i);
			if(ch[chs]!=0) {
				s4+=(char)(ch[chs]);
			}else {
				System.out.println("Failed");
				return;
			}
		}
		System.out.println(s4);
	}
}

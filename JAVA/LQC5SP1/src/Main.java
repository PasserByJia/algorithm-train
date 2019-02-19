import java.util.*;
public class Main { 
	public static String s= "abcdefghijklmnopqrs";
	public static void main(String[] args) {
		String ss ="";
		for(int i=0;i<106;i++) {
			ss+=s;
		}
		//System.out.println(ss.length());
		
		while(ss.length()>1) {
			String ar= "";
			for(int i=0;i<ss.length();i++) {
				 if(i%2!=0) {
					 ar+=ss.charAt(i);
				 }
			}
			ss=ar;
		}
		System.out.println(ss);
	}
}

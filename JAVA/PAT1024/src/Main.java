import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String s = input.nextLine();
		char firstf = s.charAt(0);
		int point = s.indexOf('.');
		s= s.replace(".", "");
		int E = s.indexOf('E');
		char secondf = s.charAt(E+1);
		String nu = s.substring(1, E);
		String kx = s.substring(E+2, s.length());
		int len = Integer.parseInt(kx);
		if(firstf=='-')System.out.print(firstf);
		if(secondf=='+') {
			if(nu.length()>len+1){
				for(int i=0;i<nu.length();i++) {
					if(i==len+1)System.out.print(".");
					System.out.print(nu.charAt(i));
				}
			}else {
				System.out.print(nu);
				for(int i=0;i<len-nu.length()+1;i++) {
					System.out.print("0");
				}
			}
		}else {
			System.out.print("0.");
			for(int i=0;i<len-1;i++) {
				System.out.print("0");
			}
			System.out.print(nu);
		}
	}
}
//-1.500E+10
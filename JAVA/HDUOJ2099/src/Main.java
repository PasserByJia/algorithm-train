import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String a = input.next();
		int b = input.nextInt();
		
		while(!a.equals("0")&&b!=0) {
			int c =0;
			for(int i=0;i<10;i++) {
				String str = a+i;
				for(int j=0;j<10;j++) {
					String str1 = str+j;
					int x = Integer.parseInt(str1);
					if((x%b)==0) {
						if(c!=0) {
							System.out.print(" ");
						}
						System.out.print(i+""+j);
						c=1;
					}
				}	
			}
			System.out.println();
			a=input.next();
			b=input.nextInt();
		}
		
	}
}

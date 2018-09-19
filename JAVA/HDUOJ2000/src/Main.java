import java.util.Arrays;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		while(in.hasNextLine()){
			String a = in.nextLine();
			char[] chars = a.toCharArray();
			Arrays.sort(chars);
			for(int i = 0; i < chars.length; i++){	
				if(i == chars.length - 1){
					System.out.print(chars[i]);
					continue;
				}
				System.out.print(chars[i] + " ");
			}
			System.out.println();
		}
	}
}
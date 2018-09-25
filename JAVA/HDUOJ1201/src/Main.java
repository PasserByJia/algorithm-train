import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		for(int i =0;i<n;i++) {
			String s = input.next();
			String[]  strs=s.split("-");
			int year = Integer.parseInt(strs[0]);
			int month = Integer.parseInt(strs[1]);
			int day = Integer.parseInt(strs[2]);
			if(month==2&&day==29) {
				System.out.println(-1);
				continue;
			}
			int count =0;
			if(isRunYear(year)&&month>2) {
				count--;
			}else if(isRunYear(year+18)&&month>2) {
				count++;
			}
			for(int j = year;j<year+18;j++) {
				if(isRunYear(j)) {
					count+=366;
				}else {
					count+=365;
				}
			}
			System.out.println(count);
		}
	}
	
	public static boolean isRunYear(int year) {
		if(year%4==0&&year%100!=0||year%400==0) {
			return true;
		}else {
			return false;
		}
	}
}

import java.util.*;
public class Main {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int num[] = new int[100005];
		int n = input.nextInt();
		input.nextLine();
		int max=-1,min=9999;
		for(int i =0;i<n;i++) {
			String s = input.nextLine();
			String[] arr = s.split(" ");
			for(String ss :arr) {
				int a = Integer.parseInt(ss);
				num[a]++;
				if(a>max) max =a;
				if(a<min) min =a;
			}
		}
		int s1=0,s2=0;
		for(int i =min;i<=max;i++) {
			if(num[i]==0) s1=i;
			if(num[i]==2) s2=i;
		}
		System.out.println(s1+" "+s2);
	}
}

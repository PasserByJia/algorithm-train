import java.util.Scanner;
public class Main {
	public static void main(String[] arg) {
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		int[][] arr = new int[n][4];
		for(int i =0;i<n;i++) {
				int a = input.nextInt();
				int b = input.nextInt();
				int c =	input.nextInt();
				int d = input.nextInt();
				arr[i][0] = a;
				arr[i][1] = b;
				arr[i][2] =	a+c;
				arr[i][3] =	b+d;
		}
		int z = input.nextInt();
		int x = input.nextInt();
		int ans =-1;
		for(int i =0;i<n;i++) {
			if(arr[i][0]<=z&&z<=arr[i][2]&&arr[i][1]<=x&&x<=arr[i][3]) {
				ans = i+1;
			}
		}
		System.out.println(ans);
	}
}

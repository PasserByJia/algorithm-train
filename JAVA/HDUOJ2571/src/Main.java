import java.util.Scanner;
public class Main {
	public static void main(String[]args) {
		Scanner input = new Scanner(System.in);
		int T = input.nextInt();
		for(int i =0;i<T;i++) {
			int n = input.nextInt();
			int m = input.nextInt();
			int[][] a = new int[n+1][m+1];
			int[][] dp = new int[n+1][m+1];
			for(int j =1;j<=n;j++) {
				for(int k =1;k<=m;k++) {
					a[j][k] = input.nextInt();
 				}
			}
			for(int j =0;j<=m;j++) {
				dp[0][j] = -105;
			}
			for(int j =0;j<=n;j++) {
				dp[j][0] = -105;
			}
			dp[1][0] = dp[0][1]=0 ;
			for(int j =1;j<=n;j++) {
				for(int k =1;k<=m;k++) {
					//a[j][k] = input.nextInt();
					dp[j][k] =  Math.max(dp[j-1][k], dp[j][k-1]);
					for(int l =2;l<=m;l++) {
						if(k%l==0)dp[j][k] = Math.max(dp[j][k], dp[j][k/l]);
					}
					dp[j][k] += a[j][k];
 				}
			}
			System.out.println(dp[n][m]);
		}
	}
}

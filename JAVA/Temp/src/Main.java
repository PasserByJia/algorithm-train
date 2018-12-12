import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        solution2(10,3);
    }
	public static int solution2(int nLevel, int kChess) {
		if (kChess == 1) {
			return nLevel;
		}
		int[][] dp = new int[nLevel + 1][kChess + 1];
		for (int i = 1; i != dp.length; i++) {
			dp[i][1] = i;
		}
		for (int i = 1; i != dp.length; i++) {
			for (int j = 2; j != dp[0].length; j++) {
				int min = Integer.MAX_VALUE;
				for (int k = 1; k != i + 1; k++) {
					min = Math.min(min,
							Math.max(dp[k - 1][j - 1], dp[i - k][j]));
				}
				dp[i][j] = min + 1;
				System.out.print(dp[i][j]+" ");
			}
			System.out.println();
		}
		return dp[nLevel][kChess];
	}
}
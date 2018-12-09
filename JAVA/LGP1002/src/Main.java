// "static void main: must be defined in a public class.
import java.util.Scanner;
public class Main {
    public static int[][] ma= {{1,2},{2,1},{-2,1},{-1,2},{-2,-1},{-1,-2},{1,-2},{2,-1}};
    public static int a;
    public static int b;
    public static int[][] vis ;
    public static long[][] dp;
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        a = input.nextInt();
        b = input.nextInt();
        vis = new int[a+5][b+5];
        dp = new long[a+5][b+5];
        int m = input.nextInt();
        int n = input.nextInt();
        vis[m][n] = 1;
        for(int i =0 ;i<ma.length;i++){
            if(m+ma[i][0]>a||n+ma[i][1]>b||m+ma[i][0]<0||n+ma[i][1]<0){
            }else{
                vis[m+ma[i][0]][n+ma[i][1]]=1;
            }
        }
        for(int i = 0 ;i<a+5;i++){
            if(vis[i][0]!=1){
                dp[i][0]=1;
            }else{
                break;
            }
        }
        for(int i = 0 ;i<b+5;i++){
            if(vis[0][i]!=1){
                dp[0][i]=1;
            }else{
                break;
            }
        }
        for(int i =1;i<a+5;i++){
            for(int j = 1;j<b+5;j++){
                if(vis[i][j]!=1){
                    long z =0;
                    long k =0;
                    if(i-1>=0) z = dp[i-1][j];
                    if(j-1>=0) k = dp[i][j-1];
                    dp[i][j]= z+k;
                }
            }
        }
        System.out.println(dp[a][b]);
    }
}
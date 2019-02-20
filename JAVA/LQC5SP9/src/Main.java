import java.util.Scanner;

public class Main {
    public static int n, m, k;
    public static long mod = 1000000007;
    public static int[][] map;
    public static long[][][][] vis = new long[51][51][102][13];
    
    public long dfs(int x, int y, int num, int max) {
        if(vis[x][y][num][max + 1] != -1)
            return vis[x][y][num][max + 1];
        if(x == n - 1 && y == m - 1) {//到达边界
            if(num == k||(num == k - 1 && max < map[x][y]))//最后一个可要可不要但都算一个路径
            	vis[x][y][num][max + 1] = 1;
            else 
            	vis[x][y][num][max + 1] = 0;
            return vis[x][y][num][max + 1];
        }
        long result = 0;
        if(x + 1 < n) {  //向下移动一步
            if(max < map[x][y]) {
                result += dfs(x + 1, y, num + 1, map[x][y]);
                result %= mod;
            }
            result += dfs(x + 1, y, num, max);
            result %= mod;
        }
        if(y + 1 < m) {   //向右移动一步
            if(max < map[x][y]) {//拿或者不拿
                result += dfs(x, y + 1, num + 1, map[x][y]);
                result %= mod;
            }
            result += dfs(x, y + 1, num, max);
            result %= mod;
        }
        return vis[x][y][num][max + 1] = result % mod;
    }
    
    public static void main(String[] args) {
        Main test = new Main();
        Scanner in = new Scanner(System.in);
        n = in.nextInt();
        m = in.nextInt();
        k = in.nextInt();
        map = new int[n][m];
        for(int i = 0;i < n;i++)
            for(int j = 0;j < m;j++)
                map[i][j] = in.nextInt();
        for(int i = 0;i < 51;i++)//初始化
            for(int j = 0;j < 51;j++)
                for(int x = 0;x < 102;x++)
                    for(int y = 0;y < 13;y++)
                        vis[i][j][x][y] = -1;
        test.dfs(0, 0, 0, -1);
        System.out.println(vis[0][0][0][0]);
    }
}
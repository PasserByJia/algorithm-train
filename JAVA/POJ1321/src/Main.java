import java.util.Scanner;
public class Main {
	public static int col[] = new int[10];
	public static int maze[][] = new int[10][10];
	public static int m;
	public static int n;
	public static String s;
	public static int ans = 0;
	public static void main(String[] args) {
		Scanner input =  new Scanner(System.in);
		while(input.hasNext()) {
			n = input.nextInt();
			m = input.nextInt();
			if(m==-1&&n==-1) break;
			for(int i=0;i<n;i++) {
				s= input.next();
				for(int j=0;j<n;j++) {
					 maze[i][j] = (s.charAt(j) == '#')?0:1;
				}
			}
			ans = 0;
	        dfs(0,0);
	        System.out.printf("%d\n",ans);
	        input.nextLine();
		}
	}
	
	public static void dfs(int nowr,int num) {
		if(num==m) {
			ans++;
			return;
		}
		if(nowr>=n) {
			return;
		}
		for(int i=0;i<n;i++) {
			if(maze[nowr][i]==1 || col[i]==1) continue;
	        col[i] = 1;
	        dfs(nowr+1,num+1);
	        col[i] = 0;
		}
		dfs(nowr + 1, num);
	}
}

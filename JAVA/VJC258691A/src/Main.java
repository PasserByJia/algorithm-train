import java.util.Scanner;
public class Main {
	public static int[][] maze = new int[5][5];
	public static int[][] idx = new int[5][5];
	public static int[][] res = new int[25][2];
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		res[0][0]=4;
		res[0][1]=4;
		for(int i=0;i<5;i++) {
			for(int j=0;j<5;j++) {
				maze[i][j]=input.nextInt();
				if(maze[i][j]==1) {
					idx[i][j]=1;
				}
			}
		}
		dfs(0,0);
		System.out.printf("(%d, %d)\n",0,0);
		for(int i =24;i>=0;i--) {
			if(res[i][0]!=0||res[i][1]!=0) {
				System.out.printf("(%d, %d)\n",res[i][0],res[i][1]);
			}
		}
	}
	
	public static boolean dfs(int x,int y) {
		if(x==4&&y==4) {
			return true;
		}
		if(x<0||y>4||y<0||x>4) {
			return false;
		}
		if(idx[x][y]>0) {
			return false;
		}
		idx[x][y] =1;
		boolean a = dfs(x+1,y);
		boolean b = dfs(x,y-1);
		boolean c = dfs(x,y+1);
		boolean d = dfs(x-1,y);
		if(a||b||c||d) {
			for(int i =0;i<25;i++) {
				if(res[i][0]==0&&res[i][1]==0) {
					res[i][0]=x;
					res[i][1]=y;
					return true;
				}
			}
		}
		return false;
	}
}

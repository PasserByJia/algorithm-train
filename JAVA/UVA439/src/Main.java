import java.util.*;
public class Main {
	public static int[][] df = {{2,1},{2,-1},{-1,2},{1,2},{-2,1},{-2,-1},{-1,-2},{1,-2}};
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		while(input.hasNext()) {
			String s = input.nextLine();
			int x1 =(int)(s.charAt(0)-'a'+1);
			int y1 =(int)(s.charAt(1)-'0');
			int x2 =(int)(s.charAt(3)-'a'+1);
			int y2 =(int)(s.charAt(4)-'0');
			System.out.printf("To get from %c%d to %c%d takes %d knight moves.\n",s.charAt(0),y1,s.charAt(3),y2,bfs( x1 , y1, x2, y2 ));
		}
	}
	public static int bfs(int x1,int y1,int x2,int y2) {
		if(x1==x2&&y1==y2) return 0;
		Queue<Integer> qx = new LinkedList<Integer>();
		Queue<Integer> qy = new LinkedList<Integer>();
		int[][] vis = new int[9][9];
		int[][] step = new int[9][9];
		qx.offer(x1);
		qy.offer(y1);
		vis[x1][y1]=1;
		while(!qx.isEmpty()&&!qy.isEmpty()){
			int tx = qx.poll();
			int ty = qy.poll();
			for(int i=0;i<8;i++) {
				int x = tx +df[i][0];
				int y = ty +df[i][1];
				//System.out.println(x+" "+y);
				if(x >0 && x< 9 && y > 0 && y < 9) {
					if(vis[x][y]==0) {
						qx.offer(x);
						qy.offer(y);
						step[x][y] = step[tx][ty]+1;
					}
					if(x==x2&&y==y2) return step[x][y]; 
				}
			}
		}
		return -1;
	}
}

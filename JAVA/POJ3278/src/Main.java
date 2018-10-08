// 参考 https://oi-wiki.org/search/bfs/
// BFS+队列 简单题
import java.util.*;
public class Main {
	public static int maxn =100001;
	public static boolean[] vis = new boolean[maxn];
	public static int[] step = new int[maxn];
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int fj = input.nextInt();
		int cow = input.nextInt();
		if(fj>cow) {
			System.out.println(fj-cow);
		}else if(fj==cow) {
			System.out.println(0);
		}else {
			System.out.println(bfs(fj,cow));
		}
	}
	public static int bfs(int start,int n) {
		int now;
		int next;
		Queue<Integer> queue = new LinkedList<Integer>();
		queue.offer(start);
		step[start] =0;
		vis[start] = true;
		while(!queue.isEmpty()){
			now = queue.poll();
			for(int i=0;i<3;i++) {
				if(i==0) next=now-1;
				else if(i==1) next=now+1;
				else next=now*2;
				if(next<0 || next>=maxn) continue;
				if(!vis[next])
				{   
					queue.offer(next) ;
					step[next]=step[now]+1;
					vis[next]=true;
				}
				
				if(next ==n) return step[next];

			}
			
		}
		
		return 0;
	}
}

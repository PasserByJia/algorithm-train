import java.util.*;
public class Main {
	public static int N;
	public static int fa;
	public static void main(String args[]) {
		Scanner input = new Scanner(System.in);
		N = input.nextInt();
		dfs(0,0);
		System.out.println(fa);
	}
	public static void dfs(int count,int step) {
		if(step==4 && count ==N) {
			fa++;
			return;
		}
		if(step+1>4) return;
		for(int i=0;i<=Math.sqrt(N);i++) {
			if(count+(i*i)>N) return;
			dfs(count+(i*i),step+1);
		}
	}
}

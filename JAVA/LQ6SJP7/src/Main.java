
public class Main {
	public static int p[] = new int[14];
	public static int ans;
	public static void main(String[] args) {
		dfs(0,0);
		System.out.println(ans);
	}
	public static void dfs(int a,int b) {
		if(a>13) return;
		if(b>=13) {
			if(b==13) {
				ans++;	
			}
			return;
		}else {
			for(int i=0;i<=4;i++) {
				dfs(a+1,b+i);
			}
		}
	}
}

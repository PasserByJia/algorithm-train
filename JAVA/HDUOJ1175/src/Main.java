import java.util.*;
public class Main {
	public static int m;
	public static int n;
	public static int [][] cb;
	public static int[][] index;
	public static int flag;
	public static int[] xp = {0,0,1,0,-1};
	public static int[] yp = {0,1,0,-1,0};
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		while(input.hasNext()) {
			 m = input.nextInt();
			 n = input.nextInt();
			if(m==0&&n==0)break;
			cb =  new int[m+1][n+1];
		    index = new int[m+1][n+1];
			for(int i=1;i<=m;i++) {
				for(int j=1;j<=n;j++) {
					cb[i][j]=input.nextInt();
					if(cb[i][j]!=0) {
						index[i][j]=1;
					}else {
						index[i][j]=0;
					}
				}
			}
			int a = input.nextInt();
			//int[][] ans = new int[a][4];
			for(int i=0;i<a;i++) {
				int[] ans = new int[4];
				flag=0;
				for(int j=0;j<4;j++) {
					ans[j]=input.nextInt();
				}
				index[ans[0]][ans[1]]=0;
				index[ans[2]][ans[3]]=0;
				if(cb[ans[0]][ans[1]]==cb[ans[2]][ans[3]]&&cb[ans[0]][ans[1]]!=0&&cb[ans[2]][ans[3]]!=0) {
					dfs(ans[0],ans[1],ans[2],ans[3],0,0);
				}
				if(flag==1) {
					System.out.println("YES");
				}else {
					System.out.println("NO");
				}
				index[ans[0]][ans[1]]=1;
			}
			
		}
	}
	public static void dfs(int x1,int y1, int x2, int y2,int cdir ,int bdir) {
		if(flag==1)return;
		if(x1<1||x1>m||y1<1||y1>n||cdir>2) return;
		if(index[x1][y1]>0) return;
		if(x1==x2&&y1==y2) {
			flag=1;
			index[x1][y1]=1;
			return;
		}
		index[x1][y1]=1;
		for(int i=1;i<=4;i++) {
			int m = x1+xp[i];
			int n = y1+yp[i];
			if(bdir==0) {
				dfs(m,n,x2,y2,cdir,i);
			}else {
				if(i!=bdir) {
					dfs(m,n,x2,y2,cdir+1,i);
				}else {
					dfs(m,n,x2,y2,cdir,i);
				}
			}
		}
		index[x1][y1]=0;
	}
}
/*这种递归方式能减少一半的时间 用这个5s用上面的10s
 * if(bdir==1) {
			dfs(x1-1,y1,x2,y2,start++,cdir,1);
			dfs(x1,y1+1,x2,y2,start++,cdir+1,2);
			dfs(x1+1,y1,x2,y2,start++,cdir+1,3);
			dfs(x1,y1-1,x2,y2,start++,cdir+1,4);
		}else if(bdir==2) {
			dfs(x1-1,y1,x2,y2,start++,cdir+1,1);
			dfs(x1,y1+1,x2,y2,start++,cdir,2);
			dfs(x1+1,y1,x2,y2,start++,cdir+1,3);
			dfs(x1,y1-1,x2,y2,start++,cdir+1,4);
		}else if(bdir==3) {
			dfs(x1-1,y1,x2,y2,start++,cdir+1,1);
			dfs(x1,y1+1,x2,y2,start++,cdir+1,2);
			dfs(x1+1,y1,x2,y2,start++,cdir,3);
			dfs(x1,y1-1,x2,y2,start++,cdir+1,4);
		}else if(bdir==4) {
			dfs(x1-1,y1,x2,y2,start++,cdir+1,1);
			dfs(x1,y1+1,x2,y2,start++,cdir+1,2);
			dfs(x1+1,y1,x2,y2,start++,cdir+1,3);
			dfs(x1,y1-1,x2,y2,start++,cdir,4);
		}else {
			dfs(x1-1,y1,x2,y2,start++,cdir,1);
			dfs(x1,y1+1,x2,y2,start++,cdir,2);
			dfs(x1+1,y1,x2,y2,start++,cdir,3);
			dfs(x1,y1-1,x2,y2,start++,cdir,4);
		}
 * */

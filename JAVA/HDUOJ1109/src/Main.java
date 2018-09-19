//感觉像PO的费马点求解问题，只不过，费马点求最小值，此题求范围内最大值
//对上样例结果了但是还是 wrong answer 原因不明 参考的c语言程序跑起来也超时了
import java .util.Scanner;
public class Main {
	public static double k=0.95;
	public static double T_min = 1e-3;
	public static double INF = 999999999;
	public static double PI = Math.acos(-1.0);
	public static int N =30;
	public static double dis[] =new double[1005];
	public static void  main(String[] args) {
		Scanner input =  new Scanner(System.in);
		int n = input.nextInt();
		for(int i =0;i<n;i++) {
			int w = input.nextInt();
			int h = input.nextInt();
			int m = input.nextInt();
			Point traps[] = new Point[m];
			for(int j=0;j<m;j++) {
				traps[j] = new Point(); 
				traps[j].x = input.nextDouble();
				traps[j].y = input.nextDouble();
			}
			Point points[] = new Point[N];
			for(int j=0;j<N;j++) {
				points[j] = new Point(); 
				points[j].x = (Math.random()*w);
				points[j].y = (Math.random()*h);
				dis[j] = oper(traps,points[j]);
			}
			double T_now = Math.max(w, h);
			
			
			while(T_now>T_min) {
				for(int j=0;j<points.length;j++)
	            {
	                for(int t=0;t<50;t++)
	                {
	                	double angle = Math.random()*(2*PI);
	                	Point temp = new Point();
	                	temp.x = points[j].x+Math.cos(angle)*T_now;
	                	temp.y = points[j].y+Math.sin(angle)*T_now;
	                	if(!check(w,h,temp)) continue ;
	                	double d = oper(traps,temp);
	                	if(d>dis[j]) {
	                		dis[j]=d;
	                		points[j]=temp;
	                	}
	                }
	            }
				T_now *= k ;
			}
			 int ans = 1;
		        for(int j=2;j<=N;j++)
		            if(dis[j]>dis[ans])
		                ans = i;
		        System.out.printf("The safest point is (%.1f, %.1f).\n",points[ans].x,points[ans].y);
		}
		
		
	}

	
	public static double dist(Point A ,Point B) {
		return Math.sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
	}
	
	public static double oper(Point[] t,Point x) {
		double d = INF;
		for(int i=0;i<t.length;i++) {
			d = Math.min(d, dist(x,t[i]));
		}
		return d;
	}
	public static boolean check(int w,int h,Point z) {
		return (z.x>=0&&z.x<=w&&z.y>=0&&z.y<h);
	}

}

class Point{
	double x;
	double y;
}
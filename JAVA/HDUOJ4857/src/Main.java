import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int T = input.nextInt();
		for(int t=0;t<T;t++) {
			
			int n = input.nextInt();
			//int []sor = new int[n+1];
			int []dis = new int[n+1];
			for(int i = 1 ;i<n+1;i++) {
			//	sor[i]=i;
				dis[i]=i;
			}
			int m = input.nextInt();
			for(int i=0;i<m;i++) {
				int a = input.nextInt();
				int b = input.nextInt();
				if(a>b) {
					int temp = dis[b];
					dis[b] =dis[a];
					dis[a]= temp;
				}
			}
			for(int i=1;i<n+1;i++) {
				System.out.print(dis[i]+" ");
			}
		}
	}
}

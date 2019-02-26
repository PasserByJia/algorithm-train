import java.util.*;
public class Main {
	public static void main(String[] atgs) {
		Scanner input = new Scanner(System.in);
		int [][] num = new int[5][2000];
		int n = input.nextInt();
		int vis[]= new int[5];
		for(int i=0;i<n;i++) {
			int temp = input.nextInt();
			num[temp%5][vis[temp%5]++] = temp;
		}
		int A1=0,A2=0,A5=0;
		double A4=0;
		
		for(int i=0;i<5;i++) {
			for(int j=0;j<vis[i];j++) {
				if(i==0&&num[i][j]%2==0)A1+=num[i][j];
				else if(i==1&&j%2==0)A2+=num[i][j];
				else if(i==1&&j%2==1)A2-=num[i][j];
				else if(i==3)A4+=num[i][j];
				else if(i==4&&num[i][j]>A5)A5=num[i][j];
			}
		}
		for(int i=0;i<5;i++) {
			if (i != 0) System.out.printf(" ");
			if (i == 0 && A1 == 0 || i != 0 && vis[i] == 0) {
			 System.out.printf("N"); continue;
			}
			if (i == 0) System.out.printf("%d", A1);
			if (i == 1) System.out.printf("%d", A2);
			if (i == 2) System.out.printf("%d", vis[2]);
			if (i == 3) System.out.printf("%.1f", A4 / vis[3]);
			if (i == 4) System.out.printf("%d", A5);
		}
	}
}

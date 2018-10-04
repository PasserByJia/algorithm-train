//HDUOJ 2084
//POJ 1163
import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner input =  new Scanner(System.in);
		int m = input.nextInt();
		for(int i =0;i<m;i++) {
			int n= input.nextInt();
			int arr[][] = new int[n+1][n+1];
			for(int j=1;j<=n;j++) {
				for(int x=1;x<=j;x++) {
					arr[j][x] = input.nextInt();
				}
			}
			int[] z =new int[n+1];
			z = arr[n];
			for(int x =n-1;x>=1;x--) {
				for(int y=1;y<=x;y++) {
					z[y] =Math.max(arr[x][y]+z[y],arr[x][y]+z[y+1]);
				}
			}
			System.out.println(z[1]);
		}
	}
}

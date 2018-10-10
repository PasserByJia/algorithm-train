//又水一题？
import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		while(input.hasNext()) {
			int m = input.nextInt();
			int n = input.nextInt();
			int[][] arr =  new int[m][n];
			for(int i=0;i<m;i++) {
				for(int j=0;j<n;j++) {
					int temp =input.nextInt();
					arr[i][j] =temp;
				}
			}
			int a=0 ,b=0,c=0;
			for(int i=0;i<m;i++) {
				for(int j=0;j<n;j++) {
					if(Math.abs(arr[i][j])>Math.abs(c)){
						a=i;
						b=j;
						c =arr[i][j];
					}
				}
			}
			System.out.println((a+1)+" "+(b+1)+ " "+c);
		}
	}
}

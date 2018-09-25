import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		for(int i =0;i<n;i++) {
			int x = input.nextInt();
			int[] a = new int[x];
			for(int j =0;j<x;j++) {
				a[j] = input.nextInt();
			}
			System.out.println("Case "+(i+1)+":");
			maxSubSum(a);
			
            if(i<n-1)
                System.out.println();

		}
	}
	
	public static void maxSubSum(int[] a) {
		int sum =0;
		int max=-1001;
		int temp=0;
		int sart=0;
		int end= 0;
		for(int i =0 ;i<a.length;i++) {
			sum +=a[i];
			if(sum>max ) {
				max  = sum;
				sart = temp;
				end  = i;
			} 
			if(sum<0) {
				sum =0;
				temp =i+1;
			}
		}
		System.out.println(max+" "+(sart+1)+" "+(end+1));
	}
}

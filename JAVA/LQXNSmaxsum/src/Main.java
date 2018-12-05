import java.util.Arrays;
import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		int p = input.nextInt();
		int q = input.nextInt();
		int k = input.nextInt();
		int[] arr = new int[n+1]; 
		int ans = 0;
 		for(int i =1;i<=n;i++) {
 			arr[i] = input.nextInt();
 		}
 		Arrays.sort(arr);
 		if(k!=0) {
 			ans-=arr[1];
 			for(int i =  2;i <= n;i++) {
 				ans+=arr[i];
 			}
 		}else {
 			for(int i =1 ;i<=n;i++) {
 				if(i<=q) {
 					ans-=arr[i];
 				}else {
 					ans+=arr[i];
 				}
 			}
 		}
 		System.out.println(ans);
	}
}

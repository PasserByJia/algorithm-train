//该代码未成功
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Scanner input  = new Scanner(System.in);
		while(input.hasNext()) {
			int n = input.nextInt();
			int[] dp =  new int[n+1];
			int[] a =  new int[n+1];
			for(int i =1;i<=n;i++) {
				a[i] = input.nextInt();
				dp[i]=1;
			}
			
			for(int i=1;i<=n;i++) {
				for(int j =1;j<=i;j++) {
					if(a[i]>a[j]) {
						dp[i]=Math.max(dp[i], dp[j]+1);
					}
				}
			}
			
			int ans = 0;
	        for (int i = 1; i <= n; i++)
	            ans = Math.max(ans, dp[i]);
	        System.out.printf("%d\n", ans);
		}
		
	}
}
/*
 *此解法应该并没有错误，但是java代码提交到HDUOJ里就是错误的情况
 import java.util.*;
public class Main {
	public static void main(String[] args) {
		Scanner input  = new Scanner(System.in);
		int n = input.nextInt();
		ArrayList<Integer> arr = new ArrayList();
		for(int i=0;i<n;i++) {
			int y =input.nextInt();
			arr.add(y);
		}
		
		int count=0;
		while(arr.size()!=0) {
			int head = arr.get(0);
		    arr.remove(0);
			int index =0;
			while(index <= arr.size()-1) {
				if(arr.get(index)<head) {
					head =arr.get(index);
					arr.remove(index);
				}else {
					index++;
				}
			}
			count++;
		}
		System.out.println(count);
	}
}
 **/

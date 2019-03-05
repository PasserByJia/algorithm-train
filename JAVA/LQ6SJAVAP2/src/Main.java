import java.util.*;
public class Main {
	public static void main(String[] args) {
		int ans =0;
		for(int i=1;i<Integer.MAX_VALUE;i++) {
			int l = i*i*i;
			int sum=0;
			while(l>0) {
				sum+=(l%10);
				l/=10;
			}
			if(sum==i)ans++;
			System.out.println(ans);
		}
		
	}
}

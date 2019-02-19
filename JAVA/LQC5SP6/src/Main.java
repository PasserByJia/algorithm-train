import java.util.*;
public class Main {
	public static double eps = 10e-10;
	public static void main(String[] args) {
		int ans = 0;
	    for(int i = 1; i < 10; ++i){
	        for(int j = 1; j < 10; ++j){
	            for(int r = 1; r < 10; ++r){
	                for(int k = 1; k < 10; k ++){
	                    if(i == j || r == k)continue;
	                    if(Math.abs( (i*10 + r)*1.0/(j*10+k) - (i*r*1.0)/(j*k)) < eps){
	                        ans++;
	                    }
	                }
	            }
	        }
	    }
	    System.out.println(ans);
	}
}

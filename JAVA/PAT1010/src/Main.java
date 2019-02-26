//错误代码,暂时没找出问题QAQ
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String s = input.nextLine();
		String ss[] = s.split(" ");
		int num[]  = new int[ss.length];
		for(int i=0;i<ss.length;i++) {
			num[i]=Integer.parseInt(ss[i]);
		}
		if(num[1]!=0) {
			int ans[]= new int[num.length];
			int anse=num.length;
			for(int i=0;i<num.length-1;i+=2) {
				ans[i] = num[i]*num[i+1];
				ans[i+1] = num[i+1]-1;
				if(ans[i]==0) anse =i;
			}
			for(int i=0;i<anse;i++) {
				System.out.print(ans[i]);
				if(i!=anse-1)System.out.print(" ");
			}
		}else {
			System.out.print("0 0");
		}
	}
}

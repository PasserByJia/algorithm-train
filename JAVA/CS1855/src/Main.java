import java.util.*;
public class Main {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int m = input.nextInt();
		for(int i =0;i<m;i++ ) {
			int n =input.nextInt();
			List<Integer> a = new ArrayList();
			for(int j=0;j<n;j++) {
				int arr=input.nextInt();
				a.add(arr);
				
			}
			Collections.sort(a);
			int count =0;
			while(true) {
				if(a.size()==1) break;
				count += (a.get(0)+a.get(1));
				int temp = a.get(0)+a.get(1);
				a.remove(0);
				a.remove(0);
				a.add(temp);
				Collections.sort(a);  
			}
			System.out.println(count);
		}
	}
}

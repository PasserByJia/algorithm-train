//该代码未成功
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

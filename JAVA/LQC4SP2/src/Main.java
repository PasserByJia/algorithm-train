import java.util.ArrayList;

public class Main {
	public static int count = 0;
	
	public static void main(String[] args) {
		ArrayList<Integer> list = new ArrayList<Integer>();
	    dfs(list, 0);
		System.out.println(count);
	}
	public static void check(ArrayList<Integer> list) {
		int a = list.get(0);
		int b = list.get(1);
		int c = list.get(2);
		int d = list.get(3);
		int e = list.get(4);
		int num1 = (a*10 + b) * (c*100 + d*10 + e);
		int num2 = (a*100 + d*10 + b) * (c*10 + e);
		if(num1 == num2)
			count++;
		return;
	}
	//dfs求取1~9中随机五个不同数字的全排列
	public static void dfs(ArrayList<Integer> list, int step) {
		if(step == 5) {
			check(list);
			return;
		} else {
			for(int i = 1;i < 10;i++) {
				if(list.contains(i))
					continue;
				list.add(i);
				dfs(list, step + 1);
				list.remove(list.size() - 1);
			}
		}
		return;
	}
}
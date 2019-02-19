import java.util.*;
public class Main {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		int arr[] = new int[n];
		for(int i=0;i<n;i++) {
			arr[i]= input.nextInt();
		}
		int ans =0;//补发糖果数量
		while(!check(arr)) {
			int temp=arr[arr.length-1]/2;//给一号小朋友使用
			for(int i=0;i<arr.length;i++) {
				if(i!=arr.length-1) {
					int temp2 = arr[i]/2;//保存自己一半的糖果数是多少
					arr[i]/=2;//分出去一半糖果
					arr[i]+=temp;//加上右手边小朋友给的糖果
					if(arr[i]%2!=0) {//看看是不是奇数
						ans++;
						arr[i]++;
					}
					temp=temp2;//给左手边的小朋友是多少?
				}else {//因为数组的关系,表达一个圈要特殊处理最后一位
					arr[i]/=2;
					arr[i]+=temp;
					if(arr[i]%2!=0) {
						ans++;
						arr[i]++;
					}
				}
			}
		}
		System.out.println(ans);
	}
	public static boolean check(int[] arr) {//所有元素是否相等
		for(int i=0;i<arr.length;i++) {
			if(i!=arr.length-1) {
				if(arr[i]!=arr[i+1]) {
					return false;
				}
			}else {
				if(arr[i]!=arr[0]) {
					return false;
				}
			}
		}
		return true;
	}
}

import java.util.*;
public class Main {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		int arr[] = new int[n];
		for(int i=0;i<n;i++) {
			arr[i]= input.nextInt();
		}
		int ans =0;//�����ǹ�����
		while(!check(arr)) {
			int temp=arr[arr.length-1]/2;//��һ��С����ʹ��
			for(int i=0;i<arr.length;i++) {
				if(i!=arr.length-1) {
					int temp2 = arr[i]/2;//�����Լ�һ����ǹ����Ƕ���
					arr[i]/=2;//�ֳ�ȥһ���ǹ�
					arr[i]+=temp;//�������ֱ�С���Ѹ����ǹ�
					if(arr[i]%2!=0) {//�����ǲ�������
						ans++;
						arr[i]++;
					}
					temp=temp2;//�����ֱߵ�С�����Ƕ���?
				}else {//��Ϊ����Ĺ�ϵ,���һ��ȦҪ���⴦�����һλ
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
	public static boolean check(int[] arr) {//����Ԫ���Ƿ����
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

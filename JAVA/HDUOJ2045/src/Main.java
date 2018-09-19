import java.util.Scanner;
public class Main {
	public static void main(String [] args) {
		Scanner input = new Scanner(System.in);
		int a;
		int arr[] = new int[52];
		arr[0]=3;
		arr[1]=6;
		arr[2]=6;
		for(int i=3;i<arr.length;i++) {
			arr[i] = arr[i-1]+arr[i-2]*2;
		}
		while(input.hasNext()) {
			a = input.nextInt();
			System.out.println(arr[a-1]);
		}
	} 
}

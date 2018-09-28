import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		while(input.hasNext()) {
			int n = input.nextInt();
			int sum =0;
			for(int i=0;i*3<=n;++i)
		    {
		      sum+=(n-i*3)/2+1;
		    }
			System.out.println(sum);
		}
		
	}

}

/*
 * 暴力破解 ，可解，严重超时
 *import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		while(input.hasNext()) {
			int n = input.nextInt();
			int count = 0;
			for(int i =0;i<=(n/3);i++) {
				for(int j=0;j<=(n/2);j++) {
					for(int k=0;k<=n;k++) {
						if((k+j*2+i*3)==n) {
							count++;
						}
					}
				}
			}
			System.out.println(count);
		}
		
	}

}*/

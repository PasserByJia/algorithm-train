import java.util.Scanner;
 
public class Main {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		while (n-- != 0) {
			char[][] array = new char[3][4];
			String temp;
			// put in
			for (int i = 0; i < 3; i++) {
				temp = s.next();
				for (int j = 0; j < 4; j++)
					array[i][j] = temp.charAt(j);
 
			}
			// find 0
			int time = 0;
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 4; j++) {
					if (array[i][j] == '0' && addrow(array, i, j)) {
						time=1;
						break;
					}
					if (array[i][j] == '0' && addline(array, i, j)) {
						time=1;
						break;
					}
				}
				if(time==1){
					break;
				}
 
			}
 
		}
 
	}
 
	public static boolean addrow(char[][] array, int i, int j) {
		// left and right can't be '-'
		if (j == 0) {
			if (array[i][j + 1] != '-') {
				System.out.println(i + "" + j + "" + '-');
				return true;
			}
 
		} else if (j == 3) {
			if (array[i][j - 1] != '-') {
				System.out.println(i + "" + j + "" + '-');
				return true;
			}
		} else {
			if (array[i][j - 1] != '-' && array[i][j + 1] != '-') {
				System.out.println(i + "" + j + "" + '-');
				return true;
			}
		}
		return false;
	}
 
	public static boolean addline(char[][] array, int i, int j) {
		// up and bottom can't be '1'
		if (i == 0) {
			if (array[i + 1][j] != '1') {
				System.out.println(i + "" + j + "" + 1);
				return true;
			}
 
		} else if (i == 2) {
			if (array[i - 1][j] != '1') {
				System.out.println(i + "" + j + "" + 1);
				return true;
			}
		} else {
			if (array[i - 1][j] != '1' && array[i + 1][j] != '1') {
				System.out.println(i + "" + j + "" + '1');
				return true;
			}
		}
		return false;
	}
}
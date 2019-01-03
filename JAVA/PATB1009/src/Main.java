//============================================================================
// Name        : PATB1009.cpp
// Author      : PasserJia
// Version     : Talk backwards
// Copyright   : Your copyright notice
// Description : JAVA, Ansi-style
//============================================================================
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String str = input.nextLine();
		String [] arr = str.split("\\s+");//Split string with space
		for(int i = arr.length-1;i>=0;i-- ) {
			System.out.print(arr[i]);
			if(i>0)System.out.print(" ");
		}		
	}
}

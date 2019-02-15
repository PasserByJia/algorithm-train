import java.util.*;
public class Main {
	public static void main(String[] args) {
		int year = 2000;
		int total = 0;
		while(true)
		{ 
			if(year%400==0 || (year%4==0 && year%100!=0))
			{
				total += 366;
			}
			else
			{
				total += 365;
			}
			if((total)%7 == 2 && (year+"").endsWith("99"))
			{
				System.out.println(year);
				break;
			}
            year++;
		}
	}
}

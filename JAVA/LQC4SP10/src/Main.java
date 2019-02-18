import java.util.*;
public class Main {
	public static void main(String args) {
		Scanner input = new Scanner(System.in);
		int a[] = new int[50010];
		int n ,sum = 0 , max , min ;
		n= input.nextInt();
		for(int i = 0 ; i < n ; ++i)
		{
			a[i]= input.nextInt();
		}
		for(int i = 0 ; i < n ; ++i)
		{
			min = max =a[i] ;
			for(int j = i ; j < n ; ++j)
			{
				if(a[j]>max)
				{
					max = a[j];
				}
				else if(a[j]<min)
				{
					min = a[j];
				}
				if(max-min == j-i)
				{
					++sum ;
				}
			}
		}
		System.out.println(sum);
	}
}

import java.util.*;
public class Main {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		while(input.hasNext()) {	
			int n = input.nextInt();
			if(n==0) break;
			double [] ina = new double[n];
			double [] in = new double[n];
			for(int i=0;i<n;i++){
				ina[i] = input.nextDouble();
			}
			Arrays.sort(ina);
			for(int i=0;i<n;i++) {
				in[n-i-1] =ina[i];
			}
			double ress =0.00;
			for(int i = 0; i + 2 < n; i++)
	        {
	            if(in[i] < in[i + 1] + in[i + 2])
	            {
	                ress += area(in[i],in[i + 1],in[i + 2]);
	                i += 2;
	            }
	        }
			System.out.printf("%.2f\n",ress);
		}
	}
	public static double area(double a,double b,double c)
	{
	    double p = (a + b + c) / 2;
	    double S = Math.sqrt(p * (p - a) * (p - b) * (p - c));
	    return S;
	}
}

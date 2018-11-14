import java.util.Scanner;
public class Main{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int m = input.nextInt();
        if(m==0)return;
        for(int i = 0;i < m;i++){
            int n = input.nextInt();
            if(n==0) {
            	//input.nextLine();
            	//input.nextLine();
            	continue;
            }
            int[] number = new int[n];
            for(int j = 0;j < n;j++){
                number[j] =  input.nextInt();
            }
            for(int k=0;k<n-1;k++){
                for(int l=k+1;l<n;l++){
                    if(Math.abs(number[k])<Math.abs(number[l])){
                        int temp = number[k];
                        number[k]= number[l];
                        number[l]=temp;
                    } 
                } 
            }
            for(int z= 0;z<n;z++){
                if(z!=n-1){
                    System.out.print(number[z]+" ");
                }else{
                    System.out.println(number[z]);
                }
            }
        }
    }
}
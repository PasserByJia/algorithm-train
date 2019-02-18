import java.util.*;
public class Main {
	public static void main(String[] args) {  
        Scanner scanner=new Scanner(System.in);  
        N=scanner.nextInt();  
        long start=System.currentTimeMillis();  
        int[] s=new int[]{1,2,3,4,5,6,7,8,9};  
        NLength=(N+"").length();  
        allRange(s, 0, s.length-1);   
        System.out.println(kinds);    
    }  
    public static int N;  
    public static int NLength;
    public static int kinds;  
    public static void process(int[] s){  
        String str="";  
        for(int i=0;i<9;i++) str+=s[i];  
        int A,B,C,NMA,BC,BMCL,BLastNumber;  
        for(int i=1;i<=NLength;i++){   
            A=Integer.valueOf(str.substring(0, i));  
            NMA=N-A;   
            if(NMA<=0)return;  
            BC=9-i;
  
            BLastNumber=(NMA*s[8])%10;
            for(int j=i+BC/2-1;j<=7;j++){  

                if(s[j]==BLastNumber){  
                    B=Integer.valueOf(str.substring(i,j+1));  
                    C=Integer.valueOf(str.substring(j+1,9));  
                    if(B%C==0&&B/C==NMA){  
                        kinds++;  
                    }  
                    break;  
                }  
            }  
        }  
    }  
    public static void swap(int[] s,int a,int b){  
        if(a==b)return;  
        int tmp=s[a];  
        s[a]=s[b];  
        s[b]=tmp;  
    }  
    //È«ÅÅÁÐ  
    public static void allRange(int[] s,int k,int m){  
        if(k==m){  
            process(s);  
            return;  
        }  
        else{  
            for(int i=k;i<=m;i++){  
                swap(s,k,i);  
                allRange(s, k+1, m);  
                swap(s,k,i);  
            }  
        }  
    }  
}
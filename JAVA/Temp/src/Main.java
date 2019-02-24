import java.util.Scanner;
import java.net.*;
public class Main{
    public static void main(String[] args){ 
        try {  
        	String keyWord = URLDecoder.decode("%E4%BA%BA%E6%B0%91%E9%93%B6%E8%A1%8C", "utf8");    
            System.out.println(keyWord); 
        } catch (Exception e) {  
            // TODO Auto-generated catch block  
            e.printStackTrace();  
        }  
    }
}
// "static void main" must be defined in a public class.
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
        int count =0;
        for(int i =0;i<s.length()-1;i++)
        {
            if(s.charAt(i)!=s.charAt(i+1))count++;
        }
        if(s.charAt(s.length()-1)=='0'){
            count++;
        }
        System.out.println(count);
    }
}

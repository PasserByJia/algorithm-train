import java.util.*;

public class Main {
    public static int n, m;
    public static void getResult() {
        ArrayList<Integer> number = new ArrayList<Integer>();
        number.add(0);
        for(int i = 1;i < n  + 5;i+=2)
            number.add(i);
        int k = 2;
        while(true) {
            int a = number.get(k++);
            ArrayList<Integer> temp = new ArrayList<Integer>();
            temp.add(0);
            for(int i = 1;i < number.size();i++)
                if(i % a != 0)
                    temp.add(number.get(i));
            number = temp;
            if(a > number.size())
                break;
        }
        int count = 0;
        for(int i = 0;i < number.size();i++) {
            if(number.get(i) > m && number.get(i) < n)
                count++;
            else if(number.get(i) >= n)
                break;
        }
        System.out.println(count);
    }
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        m = input.nextInt();
        n = input.nextInt();
        getResult();
    }
}
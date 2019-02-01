import java.util.*;
public class Main {
    public static void main(String[] args) {
        double count = 0, lose = 0;
        Random random = new Random();
        for (int n = 0; n < 500000; n++) {
            int check = Math.abs(random.nextInt() % 6) + 1;
            int i = Math.abs(random.nextInt() % 6) + 1;
            int j = Math.abs(random.nextInt() % 6) + 1;
            int k = Math.abs(random.nextInt() % 6) + 1;
            count++;
            if (i == check && j == check && k == check) {
                lose = lose + 6 + 1;
            } else if ((i == check && j == check) || (i == check && k == check)
                    || (k == check && j == check)) {
                lose = lose + 2 + 1;
            } else if (i == check || j == check || k == check) {
                lose = lose + 1 + 1;
            } else if ((check * i == j * k) || (check * j == i * k)
                    || (check * k == j * i)) {
                lose = lose + 1;
            }
        }
        double win = 1 - lose / count;
        System.out.format("%.3f", win);
    }

}
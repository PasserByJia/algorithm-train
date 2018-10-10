//CSUµÄOJÊÇ·ÏÁË°É£¿£¿£¿
import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		for(int i=0;i<n;i++) {
			int px = input.nextInt();
			int py = input.nextInt();
			int x1 = input.nextInt();
			int y1 = input.nextInt();
			int x2 = input.nextInt();
			int y2 = input.nextInt();
			int h = y2-y1;
			int w = x2-x1;
			int cx =(x1+x2)/2;
			int cy =(y1+y2)/2;
			if(Math.abs(px-cx)<(w/2)&&Math.abs(py-cy)<(h/2)) {
				System.out.println("Inside");
			}else if((Math.abs(px-cx)==(w/2)&&Math.abs(py-cy)<=(h/2))||(Math.abs(px-cx)<=(w/2)&&Math.abs(py-cy)==(h/2))){
				System.out.println("On");
			}else {
				System.out.println("Outside");
			}
		}
	}
}

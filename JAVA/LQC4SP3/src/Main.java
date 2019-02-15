import java.util.*;
public class Main {
	public static String[][]  s= {
			{"","","","","","",""},
			{"","从","我","做","起","振",""},
			{"","我","做","起","振","兴",""},
			{"","做","起","振","兴","中",""},
			{"","起","振","兴","中","华",""},
			{"","","","","","",""},
	};
	public static int count=0;
	public static void main(String[] args) {
		dfs(1,1,"从");
		System.out.println(count);
	}
	
	public static void dfs(int x,int y,String ss) {
		if(x>4||y>5)return;
		if(x==4&&y==5) {
			if(ss.equals("从我做起振兴中华")) {
				count++;
			}
			return;
		}
		String s1 =ss+s[x+1][y];
		dfs(x+1,y,s1);
		String s2 = ss+s[x][y+1];
		dfs(x,y+1,s2);
	}
}

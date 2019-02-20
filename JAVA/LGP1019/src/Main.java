import java.util.*;
public class Main {
	public static String[] ss;
	public static int n;
	public static int vis[] ;
	public static int pub[][] = new int[20][20];
	public static String fin="";
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		n = input.nextInt();
		ss = new String[n];
		vis= new int[n];
		for(int i=0;i<20;i++) {
		for(int j=0;j<20;j++) {
			pub[i][j]=Integer.MAX_VALUE;
		}
		}
		for(int i=0;i<n;i++) {
			ss[i]= input.next();
			for(int j =0;j<=i;j++) {
				String behind = ss[i];
				String head = ss[j];
				getPublicNum(head,behind,i,j);
				behind = ss[j];
				head = ss[i];
				getPublicNum(head,behind,j,i);
			}
		}
		String first = input.next();
//		for(int i=0;i<n;i++) {
//		for(int j=0;j<n;j++) {
//			System.out.print(pub[i][j]+" ");
//		}
//		System.out.println();
//		}
		for(int i=0;i<n;i++) {
			if(ss[i].charAt(0)==first.charAt(0)) {
				vis[i]++;
				dfs(ss[i],i);
				vis[i]--;
			}
		}
		//System.out.println(fin);
		System.out.println(fin.length());
	}
	public static void dfs(String before,int index) {
		//System.out.println(before);
		if(before.length()>fin.length()) {
			fin = before;
		}
		for(int i=0;i<n;i++) {
			if(pub[index][i]!=Integer.MAX_VALUE&&vis[i]<2) {
				String s = before+ss[i].substring(pub[index][i], ss[i].length());
				vis[i]++;
				dfs(s,i);
				vis[i]--;
			}
		}
	}
	public static void getPublicNum(String head ,String behind,int i,int j) {
		int a = head.length();
		int b = 0;
		while(a>1&&b<behind.length()-1) {
			String s1 = head.substring(--a, head.length());
			String s2 =behind.substring(0, ++b);
			if(s1.equals(s2)) {
				 if(s1.length()<pub[j][i])pub[j][i]=s1.length();
			}
		}
	}
	
}
//for(int i=0;i<n;i++) {
//for(int j=0;j<n;j++) {
//	System.out.print(pub[i][j]+" ");
//}
//System.out.println();
//}
//for(int i=0;i<20;i++) {
//for(int j=0;j<20;j++) {
//	pub[i][j]=Integer.MAX_VALUE;
//}
//}
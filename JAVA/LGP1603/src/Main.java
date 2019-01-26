import java.util.*;
public class Main {
	public static String s[] = {"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty"};
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String s1 = input.nextLine();
		String[] sourceStrArray = s1.split(" ");
		int temp[] = {-1,-1,-1,-1,-1,-1};
		int l =0;
		for(int i =0;i<sourceStrArray.length;i++) {
			for(int j=0;j<s.length;j++) {
				if(sourceStrArray[i].equals(s[j])) {
					temp[l]=j*j%100;
					l++;
					break;
				}else if(sourceStrArray[i].equals("a")||sourceStrArray[i].equals("first")||sourceStrArray[i].equals("another")){
					temp[l]=1*1%100;
					l++;
					break;
			    }else
			    if(sourceStrArray[i].equals("second")||sourceStrArray[i].equals("both")){
			    	temp[l]=2*2%100;
					l++;
					break;
			    }else
			    if(sourceStrArray[i].equals("third")){
			    	temp[l]=3*3%100;
					l++;
					break;
			    }
			}
		}
		Arrays.sort(temp); 
		int k=0;
		String ss[] = {null,null,null,null,null,null};
		for(int i =0;i<temp.length;i++) {
			//System.out.println(temp[i]);
			if(temp[i]!=-1) {
				if(temp[i]<10) {
					ss[k] = "0"+temp[i]+"";
					k++;
				}else {
					ss[k] = temp[i]+"";
					k++;
				}
			}
		}
		String fina="";
		for(int i=0;i<ss.length;i++) {
			if(ss[i]!=null) {
				fina+=ss[i];
			}
		}
		if(fina.equals("")||fina.equals(null)) {
			System.out.println(0);
		}else {
			System.out.println(Long.parseLong(fina));
		}
		
	}
}

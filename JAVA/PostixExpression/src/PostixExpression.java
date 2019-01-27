/**
 * 直接根据数据结构与算法分析上讲的写的一个生成后缀表达式的算法，不过目前只能生成个位数运算的表达式，还有待改进。
 * */
import java.util.*;
public class PostixExpression {
	public static char [] c = {'+','-','*','/','(',')'};
	public static void main(String [] args) {
		Scanner input = new Scanner(System.in);
		String s = input.next();
		char[] x = toSuffix(s);
		for(int i=0;i<x.length;i++) {
			System.out.print(x[i]);
		}
	}
	
	public static char[] toSuffix(String expression) {
		Stack suffix = new Stack();
		Stack op = new Stack();
		for(int i =0;i<expression.length();i++) {
			char ch = expression.charAt(i);
			if(ch<'9'&&ch>'0') {
				while(expression.length()>0&&ch<='9'&&ch>='0'&&i+1<expression.length()) {
					suffix.add(ch);
					i++;
					ch = expression.charAt(i);
				}
			    i--;
			}else if(op.size()==0){
				op.add(ch);
			}else {
				int pop = getIndex((char)op.peek());
				int add = getIndex(ch);
				if(add<pop&&pop!=4) {
					while( op.size()!=0 && getIndex((char)op.peek())!=4 ) {
						suffix.add(op.pop());
					}
					op.add(ch);
				}else if(add==5){
					while( op.size()!=0 && getIndex((char)op.peek())!=4) {
						suffix.add(op.pop());
					}
					op.pop();
				}else {
					op.add(ch);
				}
			}
		}
		while(op.size()!=0) {
			suffix.add(op.pop());
		}
		int y =suffix.size();
		char fin[] =  new char[y];
		for(int i=y-1;i>=0;i--) {
			fin[i]=(char)suffix.pop();
		}
		
		return fin;
	}

	public static int getIndex(char x) {
		for(int i=0;i<c.length;i++) {
			if(x==c[i]) {
				return i;
			}
		}
		return -1;
	}
}

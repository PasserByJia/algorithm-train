import java.util.Scanner;
 
public class Main {
public static int[][] vis ;
public static char[][] array ;
public static int count;
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int n = s.nextInt();
		while (n-- != 0) {
			String temp;
			count =999;
			vis =new int[3][4];
			array = new char[3][4];
			for (int i = 0; i < 3; i++) {
				temp = s.next();//读入一行
				for (int j = 0; j < 4; j++) {
					array[i][j] = temp.charAt(j);//拆出单个
					if(array[i][j]!='0') {
						vis[i][j]=-1;
					}
				}
			}
			int x=-1,y=-1;
			char ss ='/';
			init();
			for(int i=0;i<3;i++) {
				int temp2 = count;
				for (int j = 0; j < 4; j++) {
					if(vis[i][j]==0) {
						array[i][j]='1';
						vis[i][j]=-1;
						search(0);
						if(count<temp2) {
							x=i;y=j;ss=array[i][j];
						}
						array[i][j]='0';
						vis[i][j]=0;
						array[i][j]='-';
						vis[i][j]=-1;
						search(0);
						if(count<temp2) {
							x=i;y=j;ss=array[i][j];
						}
						array[i][j]='0';
						vis[i][j]=0;
					}else if(vis[i][j]==1){
						array[i][j]='-';
						vis[i][j]=-1;
						search(0);
						if(count<temp2) {
							x=i;y=j;ss=array[i][j];
						}
						array[i][j]='0';
						vis[i][j]=0;
					}else if(vis[i][j]==2) {
						array[i][j]='1';
						vis[i][j]=-1;
						search(0);
						if(count<temp2) {
							x=i;y=j;ss=array[i][j];
						}
						array[i][j]='0';
						vis[i][j]=0;
					}
				}	
			}
			if(x==-1||y==-1) {
				System.out.println("wujie");
			}else {
				System.out.println(x+" "+y+" "+ss);
			}
			
		}
	}
	public static void search(int num) {
		init();
		if(!isContinue()||num>=12) {
			if(num%2==0&&num<count) {
				count =num;
			}
			return;
		}
		for(int i=0;i<3;i++) {
			for (int j = 0; j < 4; j++) {
				if(vis[i][j]==0) {
					array[i][j]='1';
					vis[i][j]=-1;
					search(num++);
					array[i][j]='0';
					vis[i][j]=0;
					array[i][j]='-';
					vis[i][j]=-1;
					search(num++);
					array[i][j]='0';
					vis[i][j]=0;
				}else if(vis[i][j]==1){
					array[i][j]='-';
					vis[i][j]=-1;
					search(num++);
					array[i][j]='0';
					vis[i][j]=0;
				}else if(vis[i][j]==2) {
					array[i][j]='1';
					vis[i][j]=-1;
					search(num++);
					array[i][j]='0';
					vis[i][j]=0;
				}
			}	
		}
	}
	public static boolean isContinue() {
		for(int i=0;i<3;i++) {
			for (int j = 0; j < 4; j++) {
				if(vis[i][j]>0){
					return true;
				}
			}	
		}
		return false;
	}
	//先将能放置的位置筛选出来
	public static void init() {
		for(int i=0;i<3;i++) {
			for (int j = 0; j < 4; j++) {	
				//等于零说明没有占用
				if(vis[i][j]>=0) {
					int a=j,b=j,c=i,d=i,cflag=0,lflag=0;
					//向左扫描
					a--;
					while(a>=0) {
						if(array[i][a]=='1') {
							break;
						}else if(array[i][a]=='-') {
							cflag=1;
							break;
						}
						a--;
					}
					//向右扫描
					b++;
					while(b<4) {
						if(array[i][b]=='1') {
							break;
						}else if(array[i][b]=='-') {
							cflag=1;
							break;
						}
						b++;
					}
					//向上扫描
					
					c--;
					while(c>=0) {
						if(array[c][j]=='-') {
							break;
						}else if(array[c][j]=='1') {
							lflag=1;
							break;
						}
						c--;
					}
					
					//向下扫描
					d++;
					while(d<3) {
						if(array[d][j]=='-') {
							break;
						}else if(array[d][j]=='1') {
							lflag=1;
							break;
						}
						d++;
					}
					
					if(cflag==1&&lflag==1) {
						vis[i][j]=-1;
					}else if (cflag==0&&lflag==1) {
						vis[i][j]=1;
					}else if(cflag==1&&lflag==0) {
						vis[i][j]=2;
					}
					
				}
			}
		}
	}
}
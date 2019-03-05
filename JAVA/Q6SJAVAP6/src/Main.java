
public class Main {
	public static void main(String[] args) {
		for(int i=1;i<=46;i++) {
			for(int j=i+2;j<48;j++) {
				int ans =(i*(i+1))+(j*(j+1)); 
				//int ans =0; 
				//System.out.println(ans+" "+i+" "+j);
				for(int l=1;l<50;l++) {
					if(l!=i&&l!=i+1&&l!=j&&l!=j+1) {
						ans+=l;
					}
				}
				//System.out.println(ans);
				if(ans==2015)System.out.println(i);
			}
		}
	}
}

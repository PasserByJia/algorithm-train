
public class Main {
	public static void main(String[] args) {
		int a1,a2,a3,a4,a5,a6,a7,a8;
		for(a1=1;a1<10;a1++){
			for(a2=0;a2<10;a2++){
				for(a3=0;a3<10;a3++){
					for(a4=0;a4<10;a4++){
						for(a5=0;a5<10;a5++){
							for(a6=0;a6<10;a6++){
								for(a7=0;a7<10;a7++){
										long temp1=  a1*1000+a2*100+a3*10+a4;
										long temp2=     1000+a5*100+a6*10+a2;
										long result=   10000+a5*1000+a3*100+a2*10+a7;
										if(a1==a2||a1==a3||a1==a4||a1==a5||a1==a6||a1==a7||a2==a3||a2==a4
										 ||a2==a3||a2==a4||a2==a5||a2==a6||a2==a7||a3==a4||a3==a5||a3==a6
										 ||a3==a4||a3==a5||a3==a6||a3==a7||a4==a5||a4==a6||a4==a7||a5==a6
										 ||a5==a6||a5==a7||a6==a7||a7==1){
											continue; 	
										 }
										
										if(temp1+temp2==result){
											System.out.printf("%d+%d=%d\n",temp1,temp2,result);
											
										}					
																				
								}
							}
						}
					}
				}
			}
		}
	}
}

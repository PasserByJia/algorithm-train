#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c,d,e,f,g,h,i,temp1,temp2,temp3;
	for(a=0;a<=9;a++){
		for(b=0;b<=9;b++){
			if(b!=a){
				for( c=0;c<=9;c++){
					if(c!=a&&c!=b){
						for(d=0;d<=9;d++){
							if(d!=c&&d!=b&&d!=a){
								for(e=0;e<=9;e++){
									if(e!=a&&e!=b&&e!=c&&e!=d){
										for(f=0;f<=9;f++){
											if(f!=a&&f!=b&&f!=c&&f!=d&&f!=e){
												for(g=0;g<=9;g++){
													if(g!=a&&g!=b&&g!=c&&g!=d&&g!=e&&g!=f){
														for(h=0;h<=9;h++){
															if(h!=a&&h!=b&&h!=c&&h!=d&&h!=e&&h!=f&&h!=g){
																for(i=0;i<=9;i++){
																	if(i!=a&&i!=b&&i!=c&&i!=d&&i!=e&&i!=f&&i!=g&&i!=h){
																		temp1=a*100+b*10+c;
																		temp2=d*100+e*10+f;
																		temp3=g*100+h*10+i;
																		if(temp1*2==temp2&&temp1*3==temp3){
																			cout<<temp1<<" "<<temp2<<" "<<temp3<<endl;
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
								}
							}
						}
					}
				}
			}
		}
	}
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}

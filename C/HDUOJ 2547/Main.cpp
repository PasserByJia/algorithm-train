/*
 * Main.cpp
 *
 *  Created on: 2018Äê11ÔÂ2ÈÕ
 *      Author: 87375
 */
#include <iostream>
#include <cstdio>
#include <cmath>
#include <math.h>
using namespace std;

int mai()
{
    int t;
    cin>>t;
    while(t--){
    	double a,b,c,d;
    	    cin>>a>>b>>c>>d;
    	    double n = sqrt((a-c)*(a-c)+(b-d)*(b-d));
    	    printf("%.1lf\n",n);
    }
}

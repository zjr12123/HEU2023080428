#include<stdio.h>
int main(){
	double a,b,c,d,e,f;
	scanf("%lf,%lf,%lf,%lf",&a,&b,&c,&d);//购买价格、废品价值、产品设计寿命和使用年限
	e=(a-b)/c; 
	f=a-e*d;
	printf("%.2lf,%.2lf\n",e,f);
	return 0;
}


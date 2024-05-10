#include<stdio.h>
int main(){
	int a;
	float b;
	scanf("%d",&a);
	if(a<=125)
	b=100;
	else if(a>125 && a<=200)
	b=0.8*a;
	else if(a>200 && a<=300)
	b=160+(a-200)*0.9;
	else if(a>300 && a<=450)
	b=a-50;
	else{
	b=(a-50)*1.15;
}
	printf("%.2f",b);
	return 0;
}


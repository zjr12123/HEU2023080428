#include<stdio.h>
int main(){
	double a,b,c,d,e,f;
	scanf("%lf,%lf,%lf,%lf",&a,&b,&c,&d);//����۸񡢷�Ʒ��ֵ����Ʒ���������ʹ������
	e=(a-b)/c; 
	f=a-e*d;
	printf("%.2lf,%.2lf\n",e,f);
	return 0;
}


#include<stdio.h>
int main(int argc, char *argv[]){
	char a[5]={0};
	int i;
	for(i=0;i<5;i++){
	scanf("%c",&a[i]);
	if(a[i]>=97&&a[i]<119)
	a[i]=a[i]+4;
	else if(a[i]>=119&&a[i]<=122)
	a[i]=a[i]-22;
}
for(i=0;i<5;i++)
 printf("%c",a[i]);
 return 0;
}


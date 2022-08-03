#include <stdio.h>

int main(){
	///input a
	int a;
	printf("nhap a=");
	scanf("%d",&a);
	
	///input b
	int b;
	printf("nhap b=");
	scanf("%d",&b);
	
	///input c
	int c;
	printf("nhap c=");
	scanf("%d",&c);
	
		if(a>b>c)
		printf("%d la so lon nhat",a);
		else
		if(a<b>c)
		printf("%d la so lon nhat",b);
		else
		if(a<b<c)
		printf("%d la so lon nhat",c);
}

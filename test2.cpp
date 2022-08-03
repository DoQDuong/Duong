#include <stdio.h>

int main(){
	int num;
	printf("nhap num=");
	scanf("%d",&num);
	if(num>0)
	printf("%d la so duong",num);
	else
	if(num<0)
	printf("%d la so am",num);
	else
	printf("%d khong phai so duong khong phai so am",num);
}

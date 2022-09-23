#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,p;
	float s =0;
	printf("nhap canh thu nhat:");
	scanf("%f",&a);
	
	printf("Nhap canh thu hai:");
	scanf("%f",&b);
	
	printf("Nhap canh thu ba:");
	scanf("%f",&c);
	if((a+b)>c && (b+c)>a && (a+c)>b){
		printf("\nday la ba canh cua tam giac");
		p = (a+b+c)/2;
		s = sqrt(p*(p-a)*(p-b)*(p-c));
		printf("\ndien tich cua tam giac la %f",s);
		}else{
		printf("\nday khong phai la ba canh cua tam giac");
		}
		return 0;
}

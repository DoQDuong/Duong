#include <stdio.h>

float dientichtamgiac(int a,int b, int c){
	return a+b+c;
}
int main(){
	int a,b,c;
	printf("nhap 3 canh tam giac: ");
	scanf("%d %d %d",&a,&b,&c);
	
	float S=dientichtamgiac(a,b,c)/2;
	printf("dien tich tam giac la: %.2f",S);
}

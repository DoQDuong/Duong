#include <stdio.h>

float tinhchuvitamgiac(int a,int b, int c){
	return a+b+c;
}
int main(){
	int a,b,c;
	printf("nhap 3 canh tam giac: ");
	scanf("%d %d %d",&a,&b,&c);
	
	float P=tinhchuvitamgiac(a,b,c);
	printf("chu vi tam giac la: %f",P);
}

#include <stdio.h>
int tongcacchuso(int b){
	int T=0;
	int a;
	while(b!=0){
		a=b%10;
		b=b/10;
		T=T+a;
}
return T;
}
int main(){
	int n;
	int T;
	printf("nhap n: ");
	scanf("%d",&n);
	T=tongcacchuso(n);
	printf("tong cac chu so cua n la: %d",T,n);
}

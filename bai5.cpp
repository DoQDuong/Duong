#include <stdio.h>

int main(){
	int i,n,h;
	int a[10];
	printf("nhap n>0: ");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	h=a[0];
	for(i=1;i<10;i++){
		if(a[i]<h)
		h=a[i];
	}
	printf("\nso nguyen duong nho nhat la %d",h);
	return h;
}

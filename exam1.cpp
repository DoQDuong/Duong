#include <stdio.h>
int main(){
	int n;
	float sum=0;
	printf("nhap so nguyen n: ");
	scanf("%d",&n);
	if(n<1){
		printf("\nn phai lon hon hoac bang 1, hay nhap lai");
	}
	while(n<1);
	for(int i = 1; i <= n; i++){
		sum+=(float)1/i;
	}
	printf("S(%d)=%f",n,sum);
}

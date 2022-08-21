#include <stdio.h>

int main() {
	int a, b;
	printf("Nhap a > 0: ");
	scanf("%d", &a);
	printf("Nhap b > 0: ");
	scanf("%d", &b);
	
	if(a >= 0 && b >= 0) {
		if(a == 0 && b == 0) {
			printf("Khong ton tai UCLN, BCNN\n");
		} else if(a == 0 || b == 0) {
			printf("Khong co BCNN, UCLN = %d", (a == 0) ? b : a);
		} else { 
			int bc = a * b;
			while(a != 0) {
				int x = a;
				a = b % a;
				b = x;
			}
			
			printf("UCLN = %d\n", b);
			printf("BCNN = %d\n", bc / b);
		}
	} else {
		printf("Nhap a, b > 0");
	}
	return 0;
}

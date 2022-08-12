#include <stdio.h>
#include <math.h>

int main() {
	int n;
	printf("Nhap so nguyen n: ");
	scanf("%d", &n);
	
		int i;
		int mark = 1;
		for(i = 2; i < n; i++)  {
			if(n % i == 0) {
				mark = 0;
				break;
			}
		}
		if(mark == 1) {
			printf("%d la so nguyen to.\n", n);
		}
		
}

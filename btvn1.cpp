#include <stdio.h>

int main() {
	int n;
	printf("Nhap n > 0: ");
	scanf("%d", &n);
	int i;
		printf("Cac so le nho hon n: ");
		for(i = 1; i < n; i += 2) {
			printf("%d, ", i);
		}
	
	return 0;
}

#include <stdio.h>

int main() {
	int n;
	int sum = 0;
	printf("Nhap vao so nguyen duong n: ");
	scanf("%u", &n);
	int i;
	for(i =0 ; i < n; i += 6) {
		sum += i;
	}
	printf("so lon nhat nho hon %d chia het cho 2 va 3 la %d ",n,sum);
	return 0;
}

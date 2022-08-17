#include <stdio.h>

void nhap(int *arr, int *n) {
	*n = 0;
	while(*n <= 0) {
		printf("Nhap n > 0: ");
		scanf("%d", n);
	}
	int i;
	for(i = 0; i < *n; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

void tinhToan(int *arr, int n, float *tbl) {
	int i;
	int demL = 0;
	int tongL = 0;
	for(i = 0; i < n; i++) {
		if(!arr[i] % 2 == 0 || arr[i]%5==0) {
			tongL += arr[i];
			demL++;
		}
	}
	*tbl = (demL == 0) ? 0 : 1.0f * tongL / demL;
}

void hienThi( float tbl) {
	printf("tbc so le = %0.2f\n", tbl);
}

int main() {
	int n;
	int arr[100];
	nhap(arr, &n);
	
	float tbl;
	tinhToan(arr, n, &tbl);
	hienThi(tbl);
	
	return 0;
}

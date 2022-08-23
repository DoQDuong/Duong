#include <stdio.h>
int main(){
	int n;
	int min, max;
	printf("nhap so nguyen n :");
	scanf("%d",&n);
	int arr[100];
	for(int i = 0; i<n; i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	max = arr[0];
	for(int i = 0; i<n; i++){
		if(arr[i]>max){
			min<arr[i];
			max = arr[i];
		}
	}
	printf("\nDoan chua tat ca gia tri trong mang la:(%d.%d)",arr[0],max);
}

#include <stdio.h>
int main(){
	int n;
	int dem = 0;
	int j = 0;
	printf(" nhap n so nguyen =");
	scanf("%d",&n);
	int arr[n];
     int  x;
	printf(" gia tri x : ");
	scanf("%d",&x);
		for(int i = 0 ; i<n; i++){
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
		for(int i = 0 ; i<n ;i++){
			
			if(arr[i]<x){
				dem=arr[i]-x;
				j=i;
			}
			
		}
	} 
	printf("Gia tri trong mang x xa nhat la:%d",arr[j] );
}

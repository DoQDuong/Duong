#include <stdio.h>
int main(){
	int s=0;
	int n;
	int y=0;
	printf("nhap so =");
	scanf("%d",&n);
	while (y<=n){
		//yes
		printf("tong cua la\n");
		int s=s+y;
		y++;
	}
	//no
	printf("tong cua s=%d la",&s);
}

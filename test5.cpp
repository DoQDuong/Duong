#include <stdio.h>
#include <conio.h>
int main(){
	int day,month,s,i;
	printf("nhap ngay:");
	scanf("%d",&day);
	
	printf("nhap thang:");
	scanf("%d",&month);
	s=day;
	for(i=1;i<month;i++){
		
	switch(i){
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:s+=31;break;
	case 2:s+=28;break;
	case 4: case 6: case 9: case 11:s+=30;break;
	}
	
	}
	printf("ngay thu %d trong nam",s);
	
}

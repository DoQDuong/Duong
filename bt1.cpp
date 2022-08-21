#include<stdio.h>
int main(){
    int N;
    int Sum=0;
    do
    {   
        printf("\nNhap N = ");
        scanf("%d", &N);
        if(N <= 0)
        {
        printf("\n N phai > 0. Xin nhap lai !");
        }
    }while(N <= 0);
    printf("\ncac uoc cua %d la:\n ",N);
    for(int i = 1; i <=N; i++)
    {
        if(N%i==0)
        {
        printf("%d\t",i);
        Sum+=i;
        }
    }
    printf("\nTong cac uoc so cua %d la: %d",N,Sum);
}

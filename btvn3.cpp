#include<stdio.h>
int main(){
    int N;
    do
    {   
        printf("\nNhap N = ");
        scanf("%d", &N);
        if(N <= 0)
        {
        printf("\n N phai > 0. Xin nhap lai !");
        }
    }while(N <= 0);
    printf("cac uoc cua %d la: ",N);
    for(int i = 1; i <=N; i++)
    {
        if(N%i==0)
        {
        printf("%d \t", i);
        }
    }
}

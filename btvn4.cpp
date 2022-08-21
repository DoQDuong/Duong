#include<stdio.h>
#include<math.h>
int main()
{
    int N;
    int nghichdao = 0 ;
    do
    {
    printf("\nNhap N: ");
    scanf("%d", &N);
    }while(N < 0 && printf("\nLoi: n >= 0 !"));
    while(N != 0)
    {
    nghichdao = nghichdao * 10 + N%10;
    N = N / 10;
    }
    printf("\nSo nghich dao la: %d",nghichdao);
}

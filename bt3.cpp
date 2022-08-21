#include<stdio.h>
#include<math.h>
int main()
{
    int N;
    int gan;
    int tong = 0;
    do
    {
        printf("\nNhap N: ");
        scanf("%d", &N);
    }while(N < 0 && printf("\nLoi: n >= 0 !"));

    gan = N;
    while(gan != 0)
    {
        tong = tong + gan%10;
        gan = gan / 10;
    }
    printf("\nTong cac chu so cua %d la %d",N, tong);
}

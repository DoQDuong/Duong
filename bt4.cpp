#include<stdio.h>
#include<math.h>
int main()
{
    int N;
    int gan;
    int sodau;
    do
    {
        printf("\nNhap N: ");
        scanf("%d", &N);
    }while(N < 0 && printf("\nLoi: n >= 0 !"));
    gan = N;
    while(gan != 0)
    {
        sodau = gan%10;
        gan = gan / 10;
    }
    printf("\nChu so dau tien cua %d la %ld",N, sodau);
}

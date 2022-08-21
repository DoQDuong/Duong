#include<stdio.h>
#include<math.h>
int main()
{
    int N;
    int i;
    int max=0;
    do
    {
    printf("\nNhap N: ");
    scanf("%d", &N);
    }while(N < 0 && printf("\nLoi: n >= 0 !"));
    if(N==0)
    {
    max=0;
    }
    while(N != 0)
    {
        i = N%10;
        if (i>max)
        {
        max=i;    
        }
        N = N / 10;
    }
    printf("\nChu so lon nhat la: %d",max);
}


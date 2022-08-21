#include <stdio.h>
int main(){
   int c, n, fact = 1;
   printf("nhap so de tinh giai thua\n");
   scanf("%d", &n);
   for (c = 1; c <= n; c++) fact = fact * c;      
   printf("giai thua cua %d = %d\n", n, fact);
   return 0;
}

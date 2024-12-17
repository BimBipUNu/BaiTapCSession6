//Viết chương trình yêu cầu người dùng nhập vào một số nguyên n bất kỳ, in ra n số đầu tiên trong dãy fibonaci
#include <stdio.h>
int main()
{
    int n;
    int a = 0, b = 1, sum;
    printf("Nhập vào n: ");scanf("%d", &n);
    if (n <= 0)
    {
        printf("Số nhập vào không hợp lệ.\n");
    }
    printf("Dãy Fibonacci đầu tiên là:\n");
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            printf("%d ", a);
            continue;
        }
        if (i == 2)
        {
            printf("%d ", b);
            continue;
        }
        sum = a + b;
        a = b;
        b = sum;
        printf("%d ", sum);
    }
}
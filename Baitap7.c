//Viết chương trình yêu cầu người dùng nhập vào một số nguyên bất kỳ, in ra tất cả các ước của số đã nhập.
#include<stdio.h>
int main()
{
    int n;
    printf("Nhập một số nguyên: ");scanf("%d",&n);
    for(int i =1; i<=n ;i++)
    {
        if(n%i==0)
        {
            printf("%d\n",i);
        }
    }
}
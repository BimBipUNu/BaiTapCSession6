//In ra các chữ số Armstrong có 3 chữ số
#include<stdio.h>
#include<math.h>
int main()
{
    int num1,num2,num3;
    for(int i=100;i<=999;i++)
    {
        num1=i/100;
        num2=(i%100)/10;
        num3=i%10;
        if(pow(num1,3)+pow(num2,3)+pow(num3,3)==i)
        {
            printf("%d\n",i);
        }
    }
}
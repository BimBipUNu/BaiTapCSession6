#include<stdio.h>
#include<math.h>
int main()
{
    float money,interest;
    int month;
    printf("Nhập số tiền gửi: ");scanf("%f",&money);
    printf("Nhập lãi suất tháng: ");scanf("%f",&interest);
    printf("Nhập số tháng gửi: ");scanf("%d",&month);
    float sum;
    //Cách 1 ứng dụng vòng lặp
    for (int i =1;i<=month;i++)
    {
        money=money*(1+interest/100);
    }
    //Cách 2
    /*float sum =money*pow((1+interest/100),month);*/
    printf("%.3f",money);
}
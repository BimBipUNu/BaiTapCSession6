//Nhập vào ngày sinh và tháng sinh, in ra cung hoàng đạo biết
#include <stdio.h>
int main()
{
    int month,day;
    printf("Nhập ngày: ");scanf("%d",&day);
    printf("Nhập tháng: ");scanf("%d",&month);
    if((day >= 21 && month ==3)||(day<=20 && month ==4))
    {
        printf("Bạch Dương");
    }
    if((day >= 21 && month ==4)||(day<=20 && month ==5))
    {
        printf("Kim Ngưu");
    }
    if((day >= 21 && month ==5)||(day<=21 && month ==6))
    {
        printf("Song Tử");
    }
    if((day >= 22 && month ==6)||(day<=22 && month ==7))
    {
        printf("Cự Giải");
    }
    if((day >= 23 && month ==7)||(day<=22 && month ==8))
    {
        printf("Sử Tử");
    }
    if((day >= 23 && month ==8)||(day<=22 && month ==9))
    {
        printf("Xử Nữ");
    }
    if((day >= 23 && month ==9)||(day<=23 && month ==10))
    {
        printf("Thiên Bình");
    }
    if((day >= 24 && month ==10)||(day<=22 && month ==11))
    {
        printf("Bọ Cạp");
    }
    if((day >= 23 && month ==11)||(day<=21 && month ==12))
    {
        printf("Nhân Mã");
    }
    if((day >= 22 && month ==12)||(day<=19 && month ==1))
    {
        printf("Ma Kết");
    }
    if((day >= 20 && month ==1)||(day<=18 && month ==2))
    {
        printf("Bảo Bình");
    }
    if((day >= 19 && month ==2)||(day<=20 && month ==3))
    {
        printf("Song Ngư");
    }
}
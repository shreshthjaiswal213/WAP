#include<stdio.h>
void main()
{
    int year;

    printf("Enter the year to check if it is leap year or not:");
    scanf("%d",&year);

    if(year%4==0 && year%100!=0 || year%400==0)
    printf("%d is the leap year",year);
    else
    printf("%d is not the leap year",year);
}
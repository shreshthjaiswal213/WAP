#include<stdio.h>
void main()
{
    float c,f;

    printf("Enter the temp. in Centigrade:");
    scanf("%f",&c);

    f=(c*9/5)+32;

    printf("Temp. in Farenheit=%.2f",f);
}
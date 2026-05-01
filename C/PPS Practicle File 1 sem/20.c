// BINARY <--> DECIMAL
#include<stdio.h>
#include<math.h>
int main()
{
    int binary,decimal,temp,increase_digit,i;

/*
    printf("\nEnter binary no. to convert it into decimal no.:");
    scanf("%d",&binary);

    decimal=0;
    increase_digit=1;

    while(binary!=0)
    {
        temp=binary%10;
        decimal+=temp*increase_digit;
        increase_digit*=2;
        binary=binary/10;
    }
    printf("%d",decimal);


    printf("\nEnter decimal no. to convert it into binary no.:");
    scanf("%d",&decimal);

    binary=0;
    increase_digit=1;

    while(decimal!=0)
    {
        temp=decimal%2;
        binary+=temp*increase_digit;
        increase_digit*=10;
        decimal/=2;
    }
    printf("%d",binary);
*/


printf("\nEnter binary no. to convert it into decimal no.:");
    scanf("%d",&binary);

    decimal=0;
    i=0;

    while(binary!=0)
    {
        temp=binary%10;
        decimal+=temp*pow(2,i);
        binary/=10;
        i++;
    }
    printf("%d",decimal);


    printf("\nEnter decimal no. to convert it into binary no.:");
    scanf("%d",&decimal);

    binary=0;
    increase_digit=1;

    while(decimal!=0)
    {
        temp=decimal%2;
        binary+=temp*increase_digit;
        increase_digit*=10;
        decimal/=2;
    }
    printf("%d",binary);

    return 0;
}
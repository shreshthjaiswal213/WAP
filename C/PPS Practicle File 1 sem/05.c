#include<stdio.h>
void main()
{
    int a,b,c;

    printf("Enter the 1st numbers to interchange:");
    scanf("%d",&a);
    printf("Enter the 2nd numbers to interchange:");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;

    printf("1st=%d\n2nd=%d",a,b);
}
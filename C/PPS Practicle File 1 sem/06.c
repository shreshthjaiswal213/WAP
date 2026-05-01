#include<stdio.h>
void main()
{
    int a,b;

    printf("Enter two no. to check if they are equal or not:\n");
    scanf("%d%d",&a,&b);

    if(a==b)
    printf("They are equal.");
    else
    printf("They are not equal.");
}
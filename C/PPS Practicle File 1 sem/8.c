#include<stdio.h>
void main()
{
    int n;

    printf("Enter the no. to check if it is even or odd:");
    scanf("%d",&n);

    if(n%2==0)
    printf("The no. is EVEN");
    else
    printf("The no. is ODD");
}
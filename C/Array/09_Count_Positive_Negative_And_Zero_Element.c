// COUNT POSITIVE,NEGATIVE, AND ZERO ELEMENT
#include<stdio.h>
int main()
{
    int n,positive=0,negative=0,zero=0;

    printf("\nEnter the no. of element you wanna enter:");
    scanf("%d",&n);

    int a1[n];

    printf("\nEnter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
    }

    for(int i=0;i<n;i++)
    {
        if(a1[i]>0)
        positive++;
        else if(a1[i]<0)
        negative++;
        else
        zero++;
    }

    printf("No. of elements are\nPositive: %d\nNegative: %d\nZero: %d",positive,negative,zero);

    return 0;
}
#include<stdio.h>
void main()
{
    int i,n,sum;

    printf("Enter the no. to get sum of up to that no.:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}
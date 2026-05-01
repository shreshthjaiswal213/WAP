#include<stdio.h>
void main()
{
    int i,n,first=0,second=1,new;

    printf("Enter the no. of Fibonacci term you want:");
    scanf("%d",&n);

    printf("%d,%d,",first,second);

    for(i=1;i<=n-2;i++)
    {
        new=first+second;
        first=second;
        second=new;
        
        printf("%d,",new);
    }
}
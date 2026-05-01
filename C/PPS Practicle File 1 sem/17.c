#include<stdio.h>
void main()
{
    int i,n,t,x,u,sum;

    printf("Enter the no. to get the sum of digits of that no.:");
    scanf("%d",&n);

    for(i=1;i=i;i++)
    {
        t=n/10;
        x=t*10;
        u=n-x;
        n=n/10;
        sum+=u;
        if(n==0)
        break;
    }

    printf("The sum of digits of that no.=%d",sum);
}
#include<stdio.h>
void main()
{
    int i,n,fire=0;

    printf("Enter the no. to check if it is prime no.:");
    scanf("%d",&n);

    if(n<=1)
    fire=1;
    else
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                fire=1;
                break;
            }
        }
    }

    if(fire==1)
    printf("The no. %d is not a prime no.",n);
    else
    printf("The no. %d is a prime no.",n);


}
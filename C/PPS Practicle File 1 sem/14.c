#include<stdio.h>
void main()
{
    int i,n,even=0,odd=0;

    printf("Enter the no. to add even's & odd's upto that no.:");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        even=even+i;
        else
        odd=odd+i;
    }
    
    printf("Even's sum:%d\nOdd's sum:%d",even,odd);
}
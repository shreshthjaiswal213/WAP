// ARMSTRONG NUMBER
#include<stdio.h>
int main()
{
    int n,sum,rem,temp,i;

    printf("Enter the no. to get amstrongs no.s upto that no.:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum=0;
        temp=i;

        while(temp!=0)
        {
            rem=temp%10;
            sum=sum+(rem*rem*rem);
            temp=temp/10;
        }
        
        if(sum==i)
        printf("%d,",i);
    }
    return 0;
}
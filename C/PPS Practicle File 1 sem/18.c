#include<stdio.h>
#include<math.h>
void main()
{
    int n,r,s,t,i,j,x,w,sum;

    printf("Enter the no. to get reverse of that no.:");
    scanf("%d",&n);

    s=n;
    t=n;

    for(i=1;i=i;i++)
    {
        t=t/10;
        if(t==0)
        break;
    }

    for(j=i;j=1;j--)
    {
        r=s/10;
        x=r*10;
        w=s-x;
        s=s/10;
        sum+=w*pow(10,j-1);
        if(s==0)
        break;
    }

    printf("Reverse of given no. is %d",sum);
}
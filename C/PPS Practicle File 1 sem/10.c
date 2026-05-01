#include<stdio.h>
void main()
{
    int p,q,r,s,t,sum,per;

    printf("Enter the Marks:");
    scanf("%d%d%d%d%d",&p,&q,&r,&s,&t);

    sum=p+q+r+s+t;
    per=sum/5;

    printf("Sum=%d\nPercentage=%d\n",sum,per);
    
    if(per>=90)
    printf("Got a grade \"A\"");
    else
    if(per>=80)
    printf("Got a grade \"B\"");
    else
    if(per>=60)
    printf("Got a grade \"C\"");
    else
    printf("Got a grade \"D\"");
}
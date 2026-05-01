#include<stdio.h>
#include<math.h>
void main()
{
    float p,r,t,si,ci,x;

    printf("Enter the Principle:");
    scanf("%f",&p);
    printf("Enter the Rate:");
    scanf("%f",&r);
    printf("Enter the Time:");
    scanf("%f",&t);

    si=(p*r*t)/100;
    x=1+(r/100);
    ci=p*pow(x,t)-p;

    printf("Simple Interest=%.2f\nCompound Interest=%.2f",si,ci);

}
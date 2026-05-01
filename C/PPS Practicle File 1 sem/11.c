#include<stdio.h>
void main()
{
    int a,b;
    char op;

    printf("Enter the operater:");
    scanf("%c",&op);
    printf("Enter the operand:\n");
    scanf("%d%d",&a,&b);

    switch(op)
    {
        case'+':
        printf("%d+%d=%d",a,b,a+b);
        break;
        case'-':
        printf("%d-%d=%d",a,b,a-b);
        break;
        case'*':
        printf("%d*%d=%d",a,b,a*b);
        break;
        case'/':
        printf("%d/%d=%d",a,b,a/b);
        break;
        case'%':
        printf("%d modulus %d=%d",a,b,a%b);
        break;
        default:
        printf("Wrong Input");
    }
}
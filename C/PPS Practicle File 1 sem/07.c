#include<stdio.h>
void main()
{
    int a,b,c;

    printf("Enter the value of three numbers:");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
        printf("1st is greatest");
    }
    if(b>c)
    printf("2nd is greatest");
    else
    printf("3rd is greatest");


/*
    if((a>b)&&(a>c))
    printf("1st is greatest");
    else
    if(b>c)
    printf("2nd is greatest");
    else
    printf("3rd is greatest");
*/

/*
    ((a>b)&&(a>c))?printf("1st is greatest"):(b>c)
    ?printf("2nd is greatest"):printf("3rd is greatest");
*/
    
}
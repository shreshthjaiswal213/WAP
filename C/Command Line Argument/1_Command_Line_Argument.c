// COMMAND LINE ARGUMENT
//To get output write this in terminal   ./1_Command_Line_Argument.exe 5 7 10
#include<stdio.h>
#include<stdlib.h>

long long factorial(int n)
{
    long long fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}

int main(int argc,char*argv[])
{
    if(argc<2)
    {
        printf("usage to <num1><num2>....",argv[0]);
        return 1;
    }
    for(int i=1;i<argc;i++)
    {
        int n=atoi(argv[i]);
        if(n<0)
        {
            printf("Fact of -ve no. not posible");
            continue;
        }
        printf("\nFactorial of %d is %lld",n,factorial(n));
    }
    return 0;
}
//Linear search
#include<stdio.h>
void main()
{
    int n;

    printf("Enter the no. of elements you wanna enter in the array:");
    scanf("%d",&n);

    int eye[n];

    for(int i=0;i<n;i++)
    {
        printf("%d element:",i+1);
        scanf("%d",&eye[i]);
    } 

    int x,flag=0;
    printf("Enter the no. you wanna search:");
    scanf("%d",&x);

    for(int i=0;i<n;i++)
    {
        if(eye[i]==x)
        {
            printf("The no. %d is in the %d position\n",x,i+1);
            flag=1;
        }
    }
    if(flag==0)
    printf("The no. not found");
}
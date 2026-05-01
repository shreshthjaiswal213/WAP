//Sum of array elements.
#include<stdio.h>
void main()
{
    int n,i;

    printf("Enter the no. you wanna enter in the element:");
    scanf("%d",&n);

    int eye[n];

    for(i=0;i<n;i++)
    {
        printf("%d element:",i+1);
        scanf("%d",&eye[i]);
    }

    int sum=0;

    for(i=0;i<n;i++)
    {
        sum+=eye[i];
    }

    printf("Sum of the elements = %d",sum);
}
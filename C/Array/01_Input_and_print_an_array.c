//Input and print an array.
#include<stdio.h>
void main()
{
    int n;

    printf("Enter the no. of element you wanna enter in the element:");
    scanf("%d",&n);

    int eye[n];

    for(int i=0;i<n;i++)
    {
        printf("%d element:",i+1);
        scanf("%d",&eye[i]);
    } 

    printf("eye[]={");
    for(int i=0;i<n-1;i++)
    {
        printf("%d,",eye[i]);
    }
    printf("%d}",eye[n-1]);
}
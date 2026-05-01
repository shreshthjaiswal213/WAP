//Reverse an array
#include<stdio.h>
void main()
{
    int i,n;

    printf("\nenter the no. of elements:");
    scanf("%d",&n);

    int eye[n];

    for(i=0;i<n;i++)
    {
        printf("%d element:",i+1);
        scanf("%d",&eye[i]);
    }

    printf("\neye[]={");
    for(i=0;i<n-1;i++)
    {
        printf("%d,",eye[i]);
    }
    printf("%d}",eye[n-1]);

    int ear[n];

    for(i=0;i<n;i++)
    {
        ear[n-i-1]=eye[i];
    }

    printf("\neye[]={");
    for(i=0;i<n-1;i++)
    {
        printf("%d,",ear[i]);
    }
    printf("%d}",ear[n-1]);
}
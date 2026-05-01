// BUBBLE SHORT
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

    printf("\neye[]={");
    for(int i=0;i<n-1;i++)
    {
        printf("%d,",eye[i]);
    }
    printf("%d}",eye[n-1]);

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(eye[j]>eye[j+1])
            {
                int temp=eye[j];
                eye[j]=eye[j+1];
                eye[j+1]=temp;
            }
        }
    }

    printf("\n\n----After Sorting----\n");

    printf("\neye[]={");
    for(int i=0;i<n-1;i++)
    {
        printf("%d,",eye[i]);
    }
    printf("%d}",eye[n-1]);
}
//Find max and min.
#include<stdio.h>
void main()
{
    int i,n;

    printf("Enter the no. of elements you wanna enter:");
    scanf("%d",&n);

    int eye[n];

    for(i=0;i<n;i++)
    {
        printf("%d element:",i+1);
        scanf("%d",&eye[i]);
    }

    int max=eye[0];

    for(i=1;i<n;i++)
    {
        if(max<eye[i])
        {
            max=eye[i];
        }
    }

    int min=eye[0];

    for(i=1;i<n;i++)
    {
        if(min>eye[i])
        {
            min=eye[i];
        }
    }

    printf("Max=%d\nMin=%d",max,min);
}
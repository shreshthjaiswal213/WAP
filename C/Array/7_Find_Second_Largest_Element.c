// Find Second Largest Element
#include<stdio.h>
void main()
{
    int n;

    printf("Enter the no. of elements:");
    scanf("%d",&n);

    int eye[n];

    for(int i=0;i<n;i++)
    {
        printf("%d. elemant:",i+1);
        scanf("%d",&eye[i]);
    }

    int max=eye[0];

    for(int i=1;i<n;i++)
    {
        if(max<eye[i])
        max=eye[i];
    }

    int max2=eye[0];

    for(int i=0;i<n;i++)
    {
        if(eye[i]!=max)
        {
            if(max2<eye[i])
            max2=eye[i];
        }
    }

    printf("\nMax=%d\n2ndMax=%d",max,max2);
}
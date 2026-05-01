// Count Even and Odd Numbers
#include<stdio.h>
void main()
{
    int n;

    printf("Enter the no. of element you wanna enter in the element:");
    scanf("%d",&n);

    int eye[n],even=0,odd=0;

    for(int i=0;i<n;i++)
    {
        printf("%d element:",i+1);
        scanf("%d",&eye[i]);
    } 

    for(int i=0;i<n;i++)
    {
        if(eye[i]%2==0 && eye[i]!=0)
        even+=1;
        else if(eye[i]!=0)
        odd+=1;
    }

    printf("\nNo. of even numbers:%d",even);
    printf("\nNo. of odd numbers:%d",odd);
}
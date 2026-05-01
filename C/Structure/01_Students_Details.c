#include<stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
};

void main()
{
    int n;
    struct student s[100];

    printf("Enter the no. of students:");
    scanf("%d",&n);

    printf("Enter the detail of the students\n");
    for(int i=0;i<n;i++)
    {
        printf("%d. Student--\n",i+1);
        printf("   Roll no.:");
        scanf("%d",&s[i].roll);
        printf("   Name:");
        scanf("%s",s[i].name);
        printf("   Marks:");
        scanf("%f",&s[i].marks);
    }

    printf("\n-----Students Details-----\n");
    for(int i=0;i<n;i++)
    {
        printf("     ==\n");
        if(i<10)
        printf("%d.  || Roll no.: %d\n",i+1,s[i].roll);
        else
        printf("%d. || Roll no.: %d\n",i+1,s[i].roll);
        printf("    || Name: %s\n",s[i].name);
        printf("    || Marks:%.2f\n",s[i].marks);
        printf("     ==\n");
    }
}
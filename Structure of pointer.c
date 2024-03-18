#include<stdio.h>
struct student {
    int rollnumber;
    char name[15];
    char branch[12];
    float marks;
};
int main()
{
    struct student s1, *ptr;
    ptr = &s1;
    printf("Enter Roll Number : ");
    scanf("%d",&ptr->rollnumber);
    printf("Enter Name : ");
    fflush(stdin);
    gets(ptr->name);
    printf("Enter Branch Name : ");
    gets(ptr->branch);
    printf("Enter Marks : ");
    scanf("%d",&ptr->marks);
    printf("Roll Number : %d\n",ptr->rollnumber);
    printf("Name : %s\n",ptr->name);
    printf("Branch : %s\n",ptr->branch);
    printf("Marks : %f",ptr->marks);
}

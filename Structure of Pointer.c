// Read And Display the Data of one student using pointer
#include<stdio.h>
struct student{
    int rollnumber;
    char name[30];
    char branch[10];
    float marks;
};
int main(){
struct student s1,*ptr;
ptr =&s1;
printf("Enter Roll Numnber :");
scanf("%d",&ptr->rollnumber);
    printf("Enter name :");
    fflush(stdin);
    gets(ptr->name);
    printf("Enter Branch Name:");
    gets(ptr->branch);
    printf("Enter Marks :");
    scanf("%f",&ptr->marks);

    printf("Roll Number : %d\n",ptr->rollnumber);
    printf("Name:%s\n",ptr->name);
    printf("Branch :%s\n",ptr->branch);
    printf("Marks:%f",ptr->marks);
    return 0;
}

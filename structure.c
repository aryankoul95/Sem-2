#include <stdio.h>
#pragma pack(16)
struct student
{
    int rollnumber;
    char name[15];
    char branch[12];
    float marks;
};
int main()
{
    struct student s1 = {12001, "Andy Roberts", "IT", 345.23};
    printf("Roll Number : %d\n", s1.rollnumber);
    printf("Name : %s\n", s1.name);
    printf("Branch : %s\n", s1.branch);
    printf("Marks : %f\n", s1.marks);
    return 0;
}
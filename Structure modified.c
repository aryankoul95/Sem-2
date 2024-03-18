#include <stdio.h>

struct student
{
    int rollnumber;
    char name[15];
    char branch[12];
    float marks;
};

int main()
{
    int size, i;

    // Input the size of the student array
    printf("Enter the size: ");
    scanf("%d", &size);

    // Declare the student array after taking the size input
    struct student slist[size];

    // Input student details using a loop
    for (i = 0; i < size; i++)
    {
        printf("Enter the roll number: ");
        scanf("%d", &slist[i].rollnumber);

        printf("Enter the name: ");
        fflush(stdin);
        gets(slist[i].name);

        printf("Enter the branch: ");
        gets(slist[i].branch);

        printf("Enter the marks: ");
        scanf("%f", &slist[i].marks);
    }

    // Display student records
    printf("Student records are:\n");
    for (i = 0; i < size; i++)
    {
        printf("%15d %15s %15s %15.2f\n", slist[i].rollnumber, slist[i].name, slist[i].branch, slist[i].marks);
    }

    return 0;
}

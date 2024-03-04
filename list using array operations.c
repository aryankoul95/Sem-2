#include <stdio.h>
#include <stdlib.h>
#define maxsize 1000
int list[maxsize], size;
void create()
{
    int i;
    printf("Enter the size of list : ");
    scanf("%d", &size);
    if (size > maxsize)
        printf("List over flow !!!!");
    else
    {
        printf("Enter list elements :\n");
        for (i = 0; i < size; i++)
            scanf("%d", &list[i]);
    }
}
void display()
{
    if (size == 0)
        printf("List is Empty !!!!\n");
    else
    {
        printf("List elements are :\n ");
        int i;
        for (i = 0; i < size; i++)
            printf("%d\t", list[i]);
    }
    printf("\n");
}
void insert()
{
    if (size == 0)
        printf("List is empty !!!!\n");
    else
    {
        int pos, value, i;
        printf("Enter the position where you want to insert the new element :");
        scanf("%d", &value);
        if (pos > 0 && pos <= size)
        {
            for (i = size; i >= pos; i--)
                list[i] = list[i - 1];
            list[pos - 1] = value;
            size++;
            printf("Element Added !!!!\n");
        }
        else
            printf("Invalid Position !!!!\n");
    }
}
void delete()
{
    if (size == 0)
        printf("List is empty !!!!\n");
    else
    {
        int pos, i;
        printf("Enter the position of the element you want to delete");
        scanf("%d", &pos);
        if (pos > 0 && pos < size)
        {
            for (i = pos - 1; i < size; i++)
                list[i] = list[i + 1];
            size--;
            printf("Element Deleted !!!!\n");
        }
        else
            printf("Invalid position !!!!\n");
    }
}
void search()
{
    if (size == 0)
        printf("List is empty !!!\n");
    else
    {
        int val, i;
        printf("Enter value of search : ");
        scanf("%d", &val);
        for (i = 0; i < size; i++)
        {
            if (list[i] == val)
            {
                break;
            }
        }
        if (i == size)

            printf("Element not found !!!!\n");

        else
            printf("Element found !!!!\n");
    }
}
int main()
{
    create();
    insert();
    display();
    delete ();
    search();
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#define size 10
int stack[size],top=-1;
int isEmpty()
{
    return (top==-1)?1:0;
}
int isFull()
{
  return (top==size-1)?1:0;
}
void push()
{
    if(isFull())
    printf("Stack overflow !!!\n");
    else
    {
        top++;
        int value;
        printf("Enter the value:");
        scanf("%d",&value);
        stack[top]=value;
        printf("element is added!!!!");
    }
}
void show()
{
    if(isEmpty())
    printf("Stack is empty");
    else
    {
        int i;
        printf("Stack elements are: \n");
        for(i=top;i>=0;i--)
        {
            printf("%d",&stack[i]);
        }
    }
}
void pop()
{
    if(isEmpty())
    printf("Stack underflow!!!!");
    else{
        int val= stack[top];
        top--;
        printf("Element %d remove from the stack",val);
    }
}
void peek()
{
    if(isEmpty())
    printf("Stack is empty!!!!");
    else{
    printf(" Top Element %d in the stack", stack[top]);
    }
}
int main()
{
while(1)
{
    system("cls");
    printf("1 Push\n");
    printf("2 Pop\n");
    printf("3 Peek\n");
    printf("4 Show\n");
    printf("5 Exit\n");
    int choice;
    printf("Enter the choice :");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        push();
        break;
        case 2:
        pop();
        break;
        case 3:
        break;
        case 4:
        show();
        break;
        case 5:
        exit(0);
        break;
        default:
        printf("Invalid choice !!!!");
        break;
    }
    printf("\n\n");
    break;
}
return 0;
}

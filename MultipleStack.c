#include<stdio.h>
#include<stdlib.h>
int stack1[50], stack2[50], top1=-1, top2 = -1;

void Push1()
{
    if(top1==49){
        printf("Stack Overflow\n");
    }
    else{
    int val;
  printf("Enter Element to push: ");
  scanf("%d", &val);
     top1++;
     stack1[top1]=val;
     printf("Element Pushed successfully!!!\n");
    }
}

void Push2()
{
    if(top2==49){
        printf("Stack Overflow\n");
    }
    else{
    int val;
  printf("Enter Element to push: ");
  scanf("%d", &val);
     top2++;
     stack2[top2]=val;
     printf("Element Pushed successfully!!!\n");
    }
}

void Pop1()
{
  if(top1==-1){
    printf("Stack Underflow\n");
  }
  else{
    top1--;
    printf("Element %d Removed Successfully!!!\n", stack1[top1+1]);
  }
}

void Pop2()
{
  if(top2==-1){
    printf("Stack Underflow\n");
  }
  else{
    top2--;
    printf("Element %d Removed Successfully!!!\n", stack2[top2+1]);
  }
}

void Peek1()
{
 if(top1==-1)
  {
    printf("Stack Underflow!!!\n");
  }
  else{
    printf("%d is the topmost element\n", stack1[top1]);
  }
}

void Peek2()
{
 if(top2==-1)
  {
    printf("Stack Underflow!!!\n");
  }
  else{
    printf("%d is the topmost element\n", stack2[top2]);
  }
}
void Show1()
{
 if(top1==-1)
  {
    printf("Stack Underflow!!!\n");
  }
  else{
    printf("Stack Elements are: \n");
   for(int i=top1;i>=0;i--)
   {
    printf("%d\n", stack1[i]);
   }
  }
}

void Show2()
{
 if(top2==-1)
  {
    printf("Stack Underflow!!!\n");
  }
  else{
    printf("Stack Elements are: \n");
   for(int i=top2;i>=0;i--)
   {
    printf("%d\n", stack2[i]);
   }
  }
}


int main(){
while(1){

   printf("1. Push Data in Stack 1: \n");
   printf("2. Push Data in Stack 2: \n");
   printf("3. Pop Data from Stack 1: \n");
   printf("4. Pop Data from Stack 1: \n");
   printf("5. Peek Data from Stack 1: \n");
   printf("6. Peek Data from Stack 1: \n");
   printf("7. Show Data of Stack 1: \n");
   printf("8. Show Data of stack 2: \n");
   int choice;
   scanf("%d",&choice);
   switch (choice){
        case 1 : Push1(); break;
        case 2 : Push2(); break;
        case 3 : Pop1(); break;
        case 4: Pop2(); break;
        case 5: Peek1(); break;
        case 6: Peek2(); break;
        case 7: Show1(); break;
        case 8: Show2(); break;
   }
}
}

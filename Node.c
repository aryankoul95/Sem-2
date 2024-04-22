#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data ;//store value
    struct Node *next;// reference to next Node to access other element;
};
int main()
{
    struct Node *t=(struct Node*)malloc(sizeof(struct Node));//allocating memory for a struct node in C. This line of code dynamically allocates memory using malloc for a struct named Node. After allocation, t will point to the newly allocated memory.
    printf("Enter Data : ");// print 
    scanf("%d",&t->data);// scan the data using pointer
    t->next=NULL;
    struct Node *t1 = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter data : ");
    scanf("%d",&t1->data);
    t1->next=NULL;
    t->next=t1;
    struct Node *t2 = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter data : ");
    scanf("%d",&t2->data);
    t2->next = NULL;
    t1->next=t2;
    printf("%d -> %d -> %d\n",t->data,t1->data,t2->data);  
    // printf("%d -> %d -> %d\n",t->data,t->next->data,t->next->next->data);
    return 0;
}

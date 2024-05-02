#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;//data can be multiple also but address should be one in singly linked list.  
    struct Node *next;
};
struct Node *head=NULL;//address of first node of the list will store here.(abhi koi data nahi h too null)
struct Node* createNode(){
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter data:");
    scanf("%d",&temp->data);
    temp->next=NULL;//abhi null hi h kyunki agge koi value nahi ha null is a predefined macro and its value is 0 by default, otherwise jb null nhi ha too *void pointer*.
    return temp;
}
void createList(){
   int n,i;
   printf("enter total size of list:");
   scanf("%d",&n);
   struct Node *temp;
   for(i=1;i<=n;i++){
   struct Node *newNode=createNode();
   if(head==NULL)//jo node add kiya ha yhi node first ha null ke baad first node hi ayya
   head=newNode;
   else
    temp->next=newNode;
    temp=newNode;
   }
}
void deleteNodeAtAnyPos(){
    if(head==NULL)
    printf("List is Empty");
    else{
        int pos;
        printf("Enter position");
        scanf("%d",&pos);
        if(pos==1)
        head=head->next;
        else {
        int cnt=1;
        struct Node *temp=head;
        while(temp->next!=NULL){
            if(cnt==pos-1)
            break;
            else{
                cnt++;
                temp=temp->next;
            }
        }   
        if(temp->next==NULL)
        printf("Invalid Position");
        else{
            temp->next=temp->next->next;
        }
 }
}
}
void search(){
    if(head==NULL)
    printf("list is empty");
    else{
        int val;
        printf("Enter Searching Element :");
        scanf("%d",&val);
        struct Node *temp=head;
        while(temp!=NULL){
            if(temp->data==val)
            break;
            else
            temp=temp->next;
        }
        if(temp==NULL)
        printf("Not Found!!\n");
        else
        printf("Found!!!\n");
    }
}
void display(){
    //1. is empty by head null
    if(head==NULL)
    printf("list is empty!!!!\n");
    else{
        //traversing (data print /sorting /deletion) logic
        struct Node *temp=head;
        while(temp!=NULL){//jb tk null nhi h tb tk loop chalana ha
        printf("%d ",temp->data);
        temp=temp->next;
        }
    }
}
void insertNodeInBeg(){
    struct Node *newNode=createNode();
    newNode->next=head;
    head=newNode;
}
void insertNodeInEnd(){
    struct Node *newNode=createNode();
    if(head==NULL)
    head=newNode;
    else{//traversing
        struct Node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;//temp is a pointer have the adress of head
    }
}
void insertNodeatanypos(){
    //if list is created only then pass enter position to it
if(head==NULL)
printf("List is empty !!!!\n");
else{
int pos;
printf("Enter position:");
scanf("%d",&pos);
if(pos==1){
     struct Node *newNode=createNode();//or we can call insertatbeg(); function instead of it
    newNode->next=head;
    head=newNode;
}
else{
int cnt=1;
struct Node *temp=head;
while(temp->next !=NULL){
if(cnt==pos-1){
    break;
}
else{
cnt++;
temp=temp->next;
}
}
if(temp->next==NULL)
printf("Invalid Position !!!!\n");
else{
struct Node *newNode=createNode();
newNode->next=temp->next;
temp->next=newNode;
}
}
}
}

int main(){
    createList();  
 while(1){
 system("cls");
 printf("****Implementation of Singly Linked List****\n");
 printf("1.Insert Element in beginning of Linked List\n");
 printf("2.Insert Element in End of Linked List\n");
 printf("3.Insert Element in any location of Linked List\n");
 printf("4.Delete element from Linked List\n");
 printf("5.Search Element in Linked List\n");
 printf("6.Display all elements of Linked List\n");
 printf("7.Exit\n");
 int choice;
 printf("enter choice:\n");
 scanf("%d",&choice);
 switch(choice){
    case 1:
    insertNodeInBeg();
    break;
    case 2:
    insertNodeInEnd();
    break;
    case 3:
    insertNodeatanypos();
    break;
    case 4:
    deleteNodeAtAnyPos();
    break;
    case 5:
    search();
    break;
    case 6:
    display();
    break;
    case 7:
    exit(0);
    default:
    printf("invalid choice!!!!\n");
    break;
 }
 system("pause");
 }
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#define maxsize 1000
int list[maxsize],size;
void create(){
    int i;
    printf("Enter List Size:");
    scanf("%d",&size);
    if(size>maxsize){
    printf("List Overflow !!!!!");
    size=0;
    }
    else
    {
        printf("Enter Elements:\n");
        for(i=0;i<size;i++)
        {
         scanf("%d",&list[i]);
        }
    }
}
void DisplayList(){
    int i;
    if(size==0)
    printf("List is Empty!!!!!\n");
    else{
        printf("List Elments are:\n");
        for(i=0;i<size;i++)
        printf("%d\t",list[i]);
        printf("\n");

    }
}
void  Insert(){
    if(size==0){
    printf("List is Empty");
    }
    else{
    int pos,value,i;
    printf("Enter the Position:");
    scanf("%d",&pos);
    printf("Enter the value to Insert:");
    scanf("%d",&value);
    if(pos>size){
    printf("Invalid Poisition !!!\n");
    }
    else{
        for(i=size;i>=pos;i--)
        list[i]=list[i-1];
        list[pos-1]=value;
        size++;
        printf("Imserted Successfully !!!\n");
    }
}}
void Delete(){
if(size==0)
printf("List is Empty!!!\n");
 else{
 int pos,i;
printf("Enter the Position :");
scanf("%d",&pos);
for(i=pos-1;i<size;i++){
    list[i]=list[i+1];
}
}}
void Search(){
    if(size==0)
printf("List is Emopty!!!\n");
else{
    int val,i;
    printf("Enter Searching Value:");
    scanf("%d",&val);
   
    for(i=0;i<size;i++)
    if(val==list[i]){
        break;
    }
    if(i==size)
    {
        printf("Element Not Found!!!\n");
    }
    else
        printf("Element Found!!! at %d",i);
}}
 int main(){
  while(1)
  {
    printf("1. Create List\n");
    printf("2. Insert Element in List\n");
    printf("3. Display List\n");
    printf("4. Delete Element From a list\n");
    printf("5. Search Element in list");
    printf("6. Exit\n");
    int choice;
    printf("\n\n Enter Choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        create();
        break;
        case 2:
        Insert();
        break;
        case 3:
        DisplayList();
        break;
        case 4:
        Delete();
        break;
        case 5:
        Search();
        break;
        case 6:
        exit(0);
        break;
        default:
        printf("Invalid Choice !!!!!\n");
    }
    printf("\n\n");
         system("pause");
  }  
  }

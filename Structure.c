// // #include<stdio.h>
// // #pragma pack(16)
// // struct student{
// //     int rollnumber;
// //     char name[30];
// //     char branch[10];
// //     float marks;
// // };
// // int main(){
// //     struct student s1={12001,"Andy Smith","IT",345.23};
//     // printf("Roll Number =%d\n",s1.rollnumber);
//     // printf("Name =%s\n",s1.name);
//     // printf("Branch=%s\n",s1.branch);
//     // printf("Marks =%f\n",s1.marks);
// // return 0;
// // }
// #include<stdio.h>
// struct student{
//     int rollnumber;
//     char name[30];
//     char branch[10];
//     float marks;
// };
// int main(){
//     struct student s1;
//     printf("Enter Roll Number :");
//     scanf("%d",&s1.rollnumber);
//     printf("Enter Name :");
//     fflush(stdin);
//     gets (s1.name);
//     printf("Enter branch :");
//     gets(s1.branch);
//     printf("Enter Marks :");
//     scanf("%f",&s1.marks);
//     printf("Roll Number =%d\n",s1.rollnumber);
//     printf("Name =%s\n",s1.name);
//     printf("Branch=%s\n",s1.branch);
//     printf("Marks =%f\n",s1.marks);
// return 0;
// }

// #include<stdio.h>
// struct student{
//     int rollnumber;
//     char name[30];
//     char branch[10];
//     float marks;
// };
// int main(){
//     struct student s1,s2;
//     printf("Enter Roll Number of 1 person :");
//     scanf("%d",&s1.rollnumber);
//      printf("Enter Roll Number of 2 person :");
//     scanf("%d",&s2.rollnumber);
//     printf("Enter Name of 1 person:");
//     fflush(stdin);
//     gets (s1.name);
//     printf("Enter Name of 2 person:");
//     fflush(stdin);
//     gets (s2.name);
//     printf("Enter branch of 1 person:");
//     gets(s1.branch);
//      printf("Enter branch of 2 person:");
//     gets(s2.branch);
//     printf("Enter Marks of 1 person:");
//     scanf("%f",&s1.marks);
//     printf("Enter Marks of 2 person:");
//     scanf("%f",&s2.marks);
//     printf("Roll Number =%d\n",s1.rollnumber);
//     printf("Name =%s\n",s1.name);
//     printf("Branch=%s\n",s1.branch);
//     printf("Marks =%f\n",s1.marks);
//      printf("Roll Number =%d\n",s2.rollnumber);
//     printf("Name =%s\n",s2.name);
//     printf("Branch=%s\n",s2.branch);
//     printf("Marks =%f\n",s2.marks);
// return 0;
// } 


// #include<stdio.h>
// struct student{
//     int rollnumber;
//     char name[30];
//     char branch[10];
//     float marks;
// };
// int main(){
// int size,i;
// printf("Ente Array Size : ");
// scanf("%d",&size);
// struct student slist[size];
// for(i=0;i<size;i++){
//     printf("Enter the Roll Number :");
//     scanf("%d",&slist[i].rollnumber);
//     printf("Enter name :");
//     fflush(stdin);
//     gets(slist[i].name);
//     printf("Enter  Branch :");
//     gets(slist[i].branch);
//     printf("Enter Marks :");
//     scanf("%f",&slist[i].marks);
// }
// printf("Student records Are : \n");
// for(i=0;i<size;i++){
//     printf("%15d %15s %15s %15.2f\n",slist[i].rollnumber,slist[i].name,slist[i].branch,slist[i].marks);
// }
// return 0;
// }

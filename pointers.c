// WAP to perform the addition of two numbers using pointer 
// #include<stdio.h>
//  int main()
//  {
//     int a,b;
//     int *p1=&a , *p2=&b;
//     printf("Enter the two numbers : ");
//     scanf("%d%d",p1,p2);
//     printf("Sum = %d",*p1+*p2);
//     return 0;
//  }
 //WAP to perform the swapping of two number using pointer
// #include<stdio.h>
//  int main()
//  {
//     int a,b;
//     int *p1=&a , *p2=&b;
//     printf("Enter the two numbers : ");
//     scanf("%d%d",p1,p2);
//     *p1=*p1+*p2;
//     *p2=*p1-*p2;
//     *p1=*p1-*p2;
    
//     printf("Swapping two numbers : %d and %d",a,b);
//     return 0;
//  }

                            //OR
// #include<stdio.h>
//  int main()
//  {
//     int a,b;
//     int *p1=&a , *p2=&b;
//     printf("Enter the two numbers : ");
//     scanf("%d%d",p1,p2);
//     printf("Before swapping a=%d and b=%d\n",*p1,*p2);
//     int z =*p1;
//     *p1 =*p2;
//     *p2 = z;
//     printf("After swapping a=%d and b=%d",*p1,*p2);
//     return 0;
//  }

//WAP to read and display the elements of an array using pointer
// #include<stdio.h>
// int main()
// {
//     int i , arr[5];
//     printf("Enter the Data : ");
//     for(i=0;i<5;i++)
//     {
//         scanf("%d",arr+i);
//     }
//     printf("Array elements are :\n");
//     for(i=0;i<5;i++)
//     {
//         printf("%d\t",*(arr+i));
//     }
//     return 0;
// } 
// #include<stdio.h>
// int main()
// {
// int i , arr[5];
// printf("%d%d",arr+1,&arr+1);
// return 0;
// }

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

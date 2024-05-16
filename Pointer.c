// Wap To perform the sum of two Number using pointer
// #include<stdio.h>
// int main(){
//     int a,b;
//     int *p1=&a,*p2=&b;
//     printf("Enter two Number:");
//     scanf("%d%d",p1,p2);
//     printf("Sum = %d",*p1+*p2);
//     return 0;
// }
// Wap to Perform the Swapping of Two Numbers using Pointers
// #include<stdio.h>
// int main()
// {
// int a,b;
// int *p1=&a,*p2=&b;
//  printf("Enter the Two Numbers:");
//  scanf("%d%d",p1,p2);
//  *p1=*p1+*p2;
//  *p2=*p1-*p2;
//  *p1=*p1-*p2;
//  printf("Swapping of Two Numbers is %d and %d",*p1,*p2);
//  return 0;
//  }
// OR
//  #include<stdio.h>
//  int main()
// {
// int a,b;
// int *p1=&a,*p2=&b;
//  printf("Enter the Two Numbers:");
//  scanf("%d%d",p1,p2);
//  printf("Before Swapping a=%d and b=%d \n",*p1,*p2);
//  int z=*p1;
//  *p1=*p2;
//  *p2=z;
//  printf("After Swapping  a=%d and b=%d",*p1,*p2);
//  return 0;
// }

// Wap to Read and Display array Elements Through pointer
// #include<stdio.h>
// int main()
// {
//     int i,arr[5];
//     printf("Enter Data :");
//     for(i=0;i<5;i++)
//     {
//         scanf("%d",arr+i);
//     }
//     printf("Array Elements Are:\n");
//     for(i=0;i<5;i++){
//         printf("%d\t",*(arr+i));
//     }
//  return 0;
// }

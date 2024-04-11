// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int *p1=(int*)malloc(sizeof(int));
//     printf("Enter Number:");
//     scanf("%d",p1);
//      int *p2=(int*)malloc(sizeof(int));
//      printf("Enter Number:");
//     scanf("%d",p2);
//     printf("Sum = %d",*p1+*p2);
//      return 0;
// }


// #include<stdio.h>
// #include<stdlib.h>
// int main()
//     {
//         int sum=0,i;
//         for(i=0;i<5;i++)
//         {
//             printf("Enter Number:");
//             int *p1=(int*)malloc(sizeof(int));
//             scanf("%d",p1);
//             sum +=*p1;
//             free(p1);
//         }
//         printf("Sum = %d",sum);
//          getch();
//         return 0;
//     }


// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int *arr=(int*)calloc(5,sizeof(int));
//     printf("Enter Array Elements :");
//     int i;
//     for(i=0;i<5;i++){
//     scanf("%d",arr+i);
// }
// free(arr);
// arr=realloc(arr,10*sizeof(int));
// printf("Enter array Elements:");
// for(i=i;i<10;i++){
//     scanf("%d",arr+i);
// }
// printf("Array Elements Are:\n");
// for(i=0;i<10;i++)
// {
//     printf("%d\t",*(arr+i));
// }
// return 0;
// }

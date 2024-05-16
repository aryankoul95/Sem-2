#include<stdio.h>
int main(){
   int arr[] = {1,2,3,4,77,88,99};
   int i =0;// starting index 
   int j =6;// number length -1
   while(i<=j){
       int  mid = (i+j)/2;
       if(arr[mid]==3){
           printf("found ! ");
           return 0;
           
       }
       else if 
           (arr[mid]>3){
               j=mid-1;
           }else i =mid +1;
           }printf("not found ! ");
           return 0;
   }

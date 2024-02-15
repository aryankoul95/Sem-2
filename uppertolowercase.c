#include <stdio.h>
int main()
{
    char upper, lower;
    printf("Enter the letter in uppercase : ");
    scanf("%c", &upper);
    lower = upper | 32;
    printf("Letter in lowercase : %c", lower);
    return 0;
}
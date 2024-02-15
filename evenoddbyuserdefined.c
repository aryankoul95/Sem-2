#include <stdio.h>
void sum(int num)
{
    if (num % 2 == 0)
        printf("%d is even", num);
    else
    {
        printf("%d is odd", num);
    }
}
int main()
{
    int x;
    printf("Enter the number");
    scanf("%d", &x);
    if (x != 0)
        sum(x);
}
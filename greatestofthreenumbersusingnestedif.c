#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the three numbers : ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("%d is greatest number .", a);
        }
        else
        {
            printf("%d is greatest number .", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("%d is greatest number .", b);
        }
        else
        {
            printf("%d is greatest number .", c);
        }
    }
    return 0;
}

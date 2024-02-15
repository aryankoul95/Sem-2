#include <stdio.h>
float add(float num1, float num2);
float subtract(float num1, float num2);
float multiply(float num1, float num2);
float divide(float num1, float num2);
int main()
{
    char operator;
    float num1, num2, result;
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    if (operator== '+')
    {
        result = add(num1, num2);
    }
    else if (operator== '-')
    {
        result = subtract(num1, num2);
    }
    else if (operator== '*')
    {
        result = multiply(num1, num2);
    }
    else if (operator== '/')
    {
        if (num2 != 0)
        {
            result = divide(num1, num2);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
            return 1;
        }
    }
    else
    {
        printf("Error: Invalid operator.\n");
        return 1;
    }
    printf("Result: %.2f\n", result);

    return 0;
}
float add(float num1, float num2)
{
    return num1 + num2;
}

float subtract(float num1, float num2)
{
    return num1 - num2;
}

float multiply(float num1, float num2)
{
    return num1 * num2;
}

float divide(float num1, float num2)
{
    return num1 / num2;
}

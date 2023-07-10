#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);

int main()
{
    int value1;
    int value2;
    char operator;
    printf("Enter two numbers and a operator\n");
    scanf("%d %d %c", &value1, &value2, &operator);

    if (value1 > value2 && (operator== '*' || operator== '+' || operator== '-'))
    {
        int result = sub(value1, value2);

        printf("Result is: %d\n", result);
    }
    if (value1 < value2 && (operator== '*' || operator== '+' || operator== '-'))
    {
        int result = add(value1, value2);

        printf("Result is: %d\n", result);
    }
    if (value1 == value2 && (operator== '*' || operator== '+' || operator== '-'))
    {
        int temp = mul(value1, value2);

        printf("Result: %d\n", temp);
    }
}

int sub(int a, int b)
{
    int result;
    result = a - b;
    return result;
}
int add(int a, int b)
{
    int result;
    result = a + b;
    return result;
}
int mul(int a, int b)
{
    int result;
    result = a * b;
    return result;
}

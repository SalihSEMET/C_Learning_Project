#include <stdio.h>

int function_add_numbers(int, int, int);

int main()
{
    int a = 10, b = 20, c = 30;
    printf("This is the numbers and addresses;\nFirst:%d and Address:%p\nSecond:%d and Address:%p\nThird:%d and Address:%p\nSummary:%d", a, (void *)&a, b, (void *)&b, c, (void *)&c, function_add_numbers(a, b, c));
    return 0;
}
// This is function definition
int function_add_numbers(int a, int b, int c)
{
    int sum;
    sum = a + b + c;
    return sum;
}
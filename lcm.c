#include <stdio.h>
//Recursive function
int LCM(int, int);

int main()
{
    int a, b, result;
    int prime[100];

    printf("Input first number: ");
    scanf("%d",&a);
    printf("\nInput second number: ");
    scanf("%d",&b);
    result = LCM(a, b);
    printf("\nThe LCM of %d and %d is %d\n", a, b, result);
    return 0;
}

int LCM(int a, int b)
{
    static int common = 1;

    if (common % a == 0 && common % b == 0)
    {
        return common;
    }
    common++;
    LCM(a, b);
    return common;
}

// Chapter 2: Instructions and Operators!

#include <stdio.h>

int main()
{

    // Question: Check whether the number is divisible by 67 or not.

    int input_number, check_number;
    printf("enter the number to check:");
    scanf("%d", &input_number);
    check_number = input_number % 67;

    if (check_number == 0)
    {
        printf("yes, the number is divisible by 67");
    }
    else
    {
        printf("no, the number isn't divisible by 67");
    }

    // Question: Explain step-by-step evaluation of 3*x/y-z+r.

    printf("We are calculating 3*x/y-z+r step by step! ");
    int x, y, z, r;

    printf("enter x:");
    scanf("%d", &x);

    printf("enter y:");
    scanf("%d", &y);

    printf("enter z:");
    scanf("%d", &z);

    printf("enter r:");
    scanf("%d", &r);

    printf("The answer is: %d", ((3 * x) / y) - z + r);

    return 0;
}

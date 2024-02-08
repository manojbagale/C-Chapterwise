#include <stdio.h>

int main()
{

    // Question 1: Program to calculate the area of a rectangle.

    int length, breadth;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);
    printf("The area of the rectangle is: %d", length * breadth);

    // Question 2: Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height.

    float radius, height;
    printf("\nEnter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Enter the height of the circle: ");
    scanf("%f", &height);
    printf("The volume of the circle is: %.3f", 22.0 / 7.0 * radius * radius * height);

    // Question 3: Program to convert Celsius to Fahrenheit.

    float celsius;
    printf("\nEnter the Celsius degree: ");
    scanf("%f", &celsius);
    printf("The Fahrenheit degree is: %.2f", (celsius * 9.0 / 5.0) + 32.0);

    // Simple interest calculation.

    float principal, time, rate;
    printf("\nEnter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the time in years: ");
    scanf("%f", &time);
    printf("Enter the rate per year: ");
    scanf("%f", &rate);
    printf("The simple interest is: %.3f", (principal * time * rate) / 100.0);

    return 0;
}

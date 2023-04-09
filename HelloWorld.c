#include <stdio.h>

int main() {
    int num1, num2, sum;

    // prompt user to enter two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // add the two numbers together
    sum = num1 + num2;

    // display the sum
    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}

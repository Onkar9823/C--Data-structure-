#include <stdio.h>

int main() {
    int num1, num2, temp;

    // Input the numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Displaying numbers before swapping
    printf("\nBefore swapping:\n");
    printf("First number = %d\n", num1);
    printf("Second number = %d\n", num2);

    // Swapping logic using a temporary variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Displaying numbers after swapping
    printf("\nAfter swapping:\n");
    printf("First number = %d\n", num1);
    printf("Second number = %d\n", num2);

    return 0;
}

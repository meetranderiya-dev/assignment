#include <stdio.h>

int main() {
    int num1, num2, num3;
    int largest, smallest;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Assume first number is largest and smallest
    largest = smallest = num1;

    // Find largest number
    if (num2 > largest)
        largest = num2;

    if (num3 > largest)
        largest = num3;

    // Find smallest number
    if (num2 < smallest)
        smallest = num2;

    if (num3 < smallest)
        smallest = num3;

    // Display results
    printf("Largest number = %d\n", largest);
    printf("Smallest number = %d\n", smallest);

    return 0;
}
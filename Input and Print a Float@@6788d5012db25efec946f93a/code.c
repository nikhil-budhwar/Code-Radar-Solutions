#include <stdio.h>

int main() {
    float num;

    // Take input from the user
    printf("Enter a floating-point number: ");
    scanf("%f", &num);

    // Print the floating-point number
    printf("You entered: %.2f\n", num);

    return 0;
}

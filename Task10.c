#include <stdio.h>

int main() {

    float number;

    printf("Enter a floating-point number: ");
    scanf("%f", &number);

    printf("With 1 decimal place: %.1f\n", number);
    printf("With 3 decimal places: %.3f\n", number);

    return 0;
}
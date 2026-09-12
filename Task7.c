#include <stdio.h>

int main() {

    char city[50], country[50], grade;
    int area, population;

    printf("Enter Your City: ");
    scanf("%s", city);

    printf("Enter your Country: ");
    scanf("%s", country);

    printf("Enter your Grade: ");
    scanf(" %c", &grade);

    printf("Enter the population of your Country: ");
    scanf("%d", &population);

    printf("Enter the area of your country: ");
    scanf("%d", &area);

    printf("\nYou live in: %s, %s\n", city, country);
    printf("Population: %d\n", population);
    printf("Area: %d\n", area);
    printf("Grade: %c\n", grade);

    return 0;
}
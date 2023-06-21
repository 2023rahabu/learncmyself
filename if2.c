#include <stdio.h>

int main() {
    int number;
    int divisible_by_2, divisible_by_3;

    while (1) {
        printf("Enter a number divisible by both 2 and 3: ");
        scanf("%d", &number);

        divisible_by_2 = (number % 2 == 0);
        divisible_by_3 = (number % 3 == 0);

        if (divisible_by_2 && divisible_by_3) {
            printf("Yes, you got it!\n");
            break;
        } else {
            printf("Invalid number! Please enter a valid number.\n");
            // Clear the input buffer
            while (getchar() != '\n') {}
        }
    }

    return 0;
}

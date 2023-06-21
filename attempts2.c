#include <stdio.h>

int main() {
    int attempts = 0;
    int number;

    while (attempts < 4) {
        printf("Enter a number divisible by both 2 and 3: ");
        scanf("%d", &number);

        if (number % 2 == 0 && number % 3 == 0) {
            printf("Yes, you got it!\n");
            break;
        } else {
            printf("Invalid number. Please try again.\n");
            attempts++;
        }
    }

    if (attempts >= 4) {
        printf("You exceeded the maximum number of attempts. Quitting...\n");
    }

    return 0;
}

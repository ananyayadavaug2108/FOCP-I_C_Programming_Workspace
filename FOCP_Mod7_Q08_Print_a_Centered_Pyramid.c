#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    if (n < 1 || n > 20) {
        printf("Please enter a number between 1 and 20.\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}


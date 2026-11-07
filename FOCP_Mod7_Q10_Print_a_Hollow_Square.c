#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the square: ");
    scanf("%d", &n);

    if (n < 1 || n > 20) {
        printf("Please enter a number between 1 and 20.\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n; j++) {

            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}



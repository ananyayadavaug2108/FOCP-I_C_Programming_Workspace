#include <stdio.h>

int main() {
    int n;

    printf("Enter an odd number of rows: ");
    scanf("%d", &n);

    if (n < 3 || n > 19 || n % 2 == 0) {
        printf("Please enter an odd number between 3 and 19.\n");
        return 0;
    }

    int mid = (n + 1) / 2;

    for (int i = 1; i <= n; i++) {

        int stars = (i <= mid) ? i : n - i + 1;
        int spaces = 2 * (mid - stars) + 1;

        for (int j = 1; j <= stars; j++) {
            printf("*");
        }

        for (int j = 1; j <= spaces; j++) {
            printf(" ");
        }

        for (int j = 1; j <= stars; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}





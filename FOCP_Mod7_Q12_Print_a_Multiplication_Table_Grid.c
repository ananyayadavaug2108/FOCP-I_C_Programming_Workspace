#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the grid: ");
    scanf("%d", &n);

    if (n < 1 || n > 12) {
        printf("Please enter a number between 1 and 12.\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n; j++) {
            printf("%d", i * j);

            if (j < n) {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}






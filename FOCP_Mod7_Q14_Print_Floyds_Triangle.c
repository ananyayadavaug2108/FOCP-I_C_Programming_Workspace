#include <stdio.h>

int main() {
    int n, num = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    if (n < 1 || n > 20) {
        printf("Please enter a number between 1 and 20.\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++) {
            printf("%d", num);

            if (j < i) {
                printf(" ");
            }

            num++;
        }

        printf("\n");
    }

    return 0;
}



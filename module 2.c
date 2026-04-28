#include <stdio.h>

int main() {
    int i, j, n = 7;

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            // Conditions for swastik pattern
            if (i == 0 && j >= n/2)                 // top horizontal right
                printf("* ");
            else if (i == n/2)                     // middle horizontal
                printf("* ");
            else if (i == n-1 && j <= n/2)         // bottom horizontal left
                printf("* ");
            else if (j == 0 && i <= n/2)           // left vertical top
                printf("* ");
            else if (j == n/2)                     // middle vertical
                printf("* ");
            else if (j == n-1 && i >= n/2)         // right vertical bottom
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}

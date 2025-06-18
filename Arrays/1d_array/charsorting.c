#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter length of name (including spaces): ");
    scanf("%d", &n);
    getchar();  // Consume leftover newline

    char A[n + 1], temp;

    printf("Enter your name: ");
    fgets(A, sizeof(A), stdin);

    // Remove newline character if exists
    if (A[strlen(A) - 1] == '\n') {
        A[strlen(A) - 1] = '\0';
    }

    int length = strlen(A);

    // Selection sort
    for (int sl = 0; sl < (length - 1); sl++) {
        for (int cmp = sl + 1; cmp < length; cmp++) {
            if (A[sl] > A[cmp]) {
                temp = A[sl];
                A[sl] = A[cmp];
                A[cmp] = temp;
            }
        }
    }

    printf("Sorted name is: %s\n", A);

    return 0;
}

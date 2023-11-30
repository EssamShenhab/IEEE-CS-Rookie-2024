#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    char S[A + B + 1];
    scanf("%s", S);

    int isValid = 1;

    if (S[A] != '-') {
        isValid = 0;
    } else {
        for (int i = 0; i < A + B + 1; i++) {
            if (i != A && (S[i] < '0' || S[i] > '9')) {
                isValid = 0;
                break;
            }
        }
    }

    if (isValid) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

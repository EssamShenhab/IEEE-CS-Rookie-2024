#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N], B[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < N; i++) {
        scanf("%d", &B[i]);
    }

    int count[N + 1];
    for (int i = 0; i <= N; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < N; i++) {
        count[A[i]]++;
        count[B[i]]--;
    }

    int isValid = 1;
    for (int i = 1; i <= N; i++) {
        if (count[i] != 0) {
            isValid = 0;
            break;
        }
    }

    if (isValid) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}

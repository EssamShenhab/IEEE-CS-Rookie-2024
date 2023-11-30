include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int maxOperations = 0;
    int oddPresent = 0;

    for (int i = 0; i < N; i++) {
        int Ai;
        scanf("%d", &Ai);

        if (Ai % 2 != 0) {
            oddPresent = 1;
        }
    }

    if (!oddPresent) {
        int operations = 0;

        while (1) {
            int allEven = 1;

            for (int i = 0; i < N; i++) {
                if (Ai[i] % 2 != 0) {
                    allEven = 0;
                    break;
                }
            }

            if (allEven) {
                operations++;
                for (int i = 0; i < N; i++) {
                    Ai[i] /= 2;
                }
            } else {
                break;
            }
        }

        maxOperations = operations;
    }

    printf("%d\n", maxOperations);

    return 0;
}

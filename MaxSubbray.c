#include <stdio.h>

void max_numbers_in_subarrays(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int current_max = arr[i];
        for (int j = i; j < n; j++) {
            current_max = (arr[j] > current_max) ? arr[j] : current_max;
            printf("%d ", current_max);
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);

    for (int testCase = 0; testCase < t; testCase++) {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        max_numbers_in_subarrays(arr, n);
        printf("\n");
    }

    return 0;
}

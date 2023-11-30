# SmallestPair.c
Smallest pair task

#include <stdio.h>

int testCase, i, result;
int smallest_sum(int arr[], int n) {
    int min_sum = _INT_MAX_;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int current_sum = arr[i] + arr[j] + (j - i);
            min_sum = (current_sum < min_sum) ? current_sum : min_sum;
        }
    }

    return min_sum;
}

int main()
{
    printf("enter number of test cases\n");
    int t;
    scanf("%d", &t);

    for (testCase = 0; testCase < t; testCase++) {
        int n;
        printf("enter the amount of numbers\n");
        scanf("%d", &n);
        int arr[n];
        printf("enter the numbers\n");
        for (i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        result = smallest_sum(arr, n);
        printf("%d\n", result);
    }

    return 0;
}

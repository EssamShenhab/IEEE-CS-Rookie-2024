#include <iostream>
 
int countNonDecreasingSubarrays(int N, int A[]) {
    int result = 0;
    int currentCount = 1; // Initialize with 1 for singleton sub-arrays
 
    for (int i = 1; i < N; i++) {
        if (A[i] >= A[i - 1]) {
            // If the current element is greater than or equal to the previous one,
            // it contributes to the current non-decreasing subarray.
            currentCount++;
        } else {
            // If the current element is smaller, reset the count.
            result += (currentCount * (currentCount + 1)) / 2; // Add count for previous non-decreasing subarrays
            currentCount = 1; // Start counting for the new subarray
        }
    }
 
    // Add count for the last non-decreasing subarray
    result += (currentCount * (currentCount + 1)) / 2;
 
    return result;
}
 
int main() {
    int T;
    std::cin >> T;
 
    for (int testCase = 0; testCase < T; testCase++) {
        int N;
        std::cin >> N;
 
        int A[N];
        for (int i = 0; i < N; i++) {
            std::cin >> A[i];
        }
 
        // Output the result for each test case
        int result = countNonDecreasingSubarrays(N, A);
        std::cout << result << std::endl;
    }
 
    return 0;
}

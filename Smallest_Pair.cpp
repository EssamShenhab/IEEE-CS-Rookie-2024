#include <iostream>
#include <climits>
 
int main() {
    int t;
    std::cin >> t;
 
    for (int testCase = 0; testCase < t; testCase++) {
        int n;
        std::cin >> n;
        
        int arr[n];
        for (int i = 0; i < n; i++) {
            std::cin >> arr[i];
        }
 
        int min_sum = INT_MAX;
 
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int current_sum = arr[i] + arr[j] + (j - i);
                min_sum = std::min(min_sum, current_sum);
            }
        }
 
        std::cout << min_sum << std::endl;
    }
 
    return 0;
}

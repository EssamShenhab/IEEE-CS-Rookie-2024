#include <iostream>
#include <vector>
#include <algorithm>
 
int main() {
    int t;
    std::cin >> t;
 
    for (int testCase = 0; testCase < t; testCase++) {
        int n;
        std::cin >> n;
 
        std::vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            std::cin >> arr[i];
        }
 
        std::vector<int> maxNumbers;
 
        for (int i = 0; i < n; i++) {
            int currentMax = arr[i];
            for (int j = i; j < n; j++) {
                currentMax = std::max(currentMax, arr[j]);
                maxNumbers.push_back(currentMax);
            }
        }
 
        // Output the result
        for (int i = 0; i < maxNumbers.size(); i++) {
            std::cout << maxNumbers[i] << " ";
        }
        std::cout << std::endl;
    }
 
    return 0;
}

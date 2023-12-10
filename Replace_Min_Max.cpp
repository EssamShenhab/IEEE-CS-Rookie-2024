#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    // Find the minimum and maximum elements
    auto minElement = std::min_element(arr.begin(), arr.end());
    auto maxElement = std::max_element(arr.begin(), arr.end());

    // Swap the minimum and maximum elements
    std::swap(*minElement, *maxElement);

    // Output the result
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

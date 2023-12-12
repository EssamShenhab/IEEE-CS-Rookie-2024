#include <iostream>

int main() {
    int N;
    std::cin >> N;

    int maxOperations = 0;

    for (int i = 0; i < N; i++) {
        int Ai;
        std::cin >> Ai;

        // Count the number of trailing zeros (even numbers)
        int zerosCount = 0;
        while (Ai % 2 == 0) {
            zerosCount++;
            Ai /= 2;
        }

        // Update the maximum number of operations
        maxOperations = std::max(maxOperations, zerosCount);
    }

    // Output the result
    std::cout << maxOperations << std::endl;

    return 0;
}

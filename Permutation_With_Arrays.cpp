#include <iostream>
#include <vector>
#include <algorithm>
 
int main() {
    int N;
    std::cin >> N;
 
    // Read array A
    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }
 
    // Read array B
    std::vector<int> B(N);
    for (int i = 0; i < N; i++) {
        std::cin >> B[i];
    }
 
    // Sort both arrays
    std::sort(A.begin(), A.end());
    std::sort(B.begin(), B.end());
 
    // Check if B is a permutation of A
    bool isPermutation = (A == B);
 
    // Output the result
    if (isPermutation) {
        std::cout << "yes" << std::endl;
    } else {
        std::cout << "no" << std::endl;
    }
 
    return 0;
}

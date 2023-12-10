#include <iostream>
#include <vector>
 
bool isSubsequence(const std::vector<int>& A, const std::vector<int>& B) {
    int n = A.size();
    int m = B.size();
 
    int i = 0, j = 0;
 
    // Traverse both arrays
    while (i < n && j < m) {
        // If the current elements match, move to the next element in B
        if (A[i] == B[j]) {
            j++;
        }
        // Move to the next element in A
        i++;
    }
 
    // If all elements in B are visited, B is a subsequence of A
    return (j == m);
}
 
int main() {
    int N, M;
    std::cin >> N >> M;
 
    // Read array A
    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }
 
    // Read array B
    std::vector<int> B(M);
    for (int i = 0; i < M; i++) {
        std::cin >> B[i];
    }
 
    // Check if B is a subsequence of A
    bool result = isSubsequence(A, B);
 
    // Output the result
    if (result) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
 
    return 0;
}

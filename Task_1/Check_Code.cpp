#include <iostream>
#include <string>

int main() {
    int A, B;
    std::cin >> A >> B;

    std::string S;
    std::cin >> S;

    // Check if the length of S is correct
    if (S.length() != A + B + 1) {
        std::cout << "No" << std::endl;
        return 0;
    }

    // Check the format of the code
    for (int i = 0; i < A + B + 1; i++) {
        if (i == A) {
            // Position A+1 should be '-'
            if (S[i] != '-') {
                std::cout << "No" << std::endl;
                return 0;
            }
        } else {
            // Other positions should be digits
            if (!isdigit(S[i])) {
                std::cout << "No" << std::endl;
                return 0;
            }
        }
    }

    // If all checks pass, print "Yes"
    std::cout << "Yes" << std::endl;

    return 0;
}

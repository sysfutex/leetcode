#include <cstdlib>
#include <iostream>

#include "solution.cpp"

using namespace std;

int main() {
    Solution solution;

    string solution1 = solution.isPalindrome(121) == true ? "true" : "false";
    string solution2 = solution.isPalindrome(-121) == true ? "true" : "false";
    string solution3 = solution.isPalindrome(19) == true ? "true" : "false";

    cout << "true: " << solution1 << endl;
    cout << "false: " << solution2 << endl;
    cout << "false: " << solution3 << endl;

    return EXIT_SUCCESS;
}

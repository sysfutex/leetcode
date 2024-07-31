#include <cstdlib>
#include <iostream>
#include <string>

#include "solution.cpp"

using namespace std;

int main() {
    Solution solution;

    string solution1 = solution.isValid("()") ? "true" : "false";
    cout << "true: " << solution1 << endl;

    string solution2 = solution.isValid("()[]{}") ? "true" : "false";
    cout << "true: " << solution2 << endl;

    string solution3 = solution.isValid("(]") ? "true" : "false";
    cout << "false: " << solution3 << endl;

    return EXIT_SUCCESS;
}

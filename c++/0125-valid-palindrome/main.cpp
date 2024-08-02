#include <cstdlib>
#include <iostream>
#include <string>

#include "solution.cpp"

using namespace std;

int main() {
    Solution solution;

    string answer1 = solution.isPalindrome("A man, a plan, a canal: Panama") ? "true" : "false";
    cout << "true: " << answer1 << endl;

    string answer2 = solution.isPalindrome("race a car") ? "true" : "false";
    cout << "false: " << answer2 << endl;

    string answer3 = solution.isPalindrome(" ") ? "true" : "false";
    cout << "true: " << answer3 << endl;

    return EXIT_SUCCESS;
}

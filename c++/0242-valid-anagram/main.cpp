#include <cstdlib>
#include <iostream>
#include <string>

#include "solution.cpp"

using namespace std;

int main() {
    Solution solution;

    string solution1 = solution.isAnagram("anagram", "nagaram") ? "true" : "false";
    cout << "true: " << solution1 << endl;

    string solution2 = solution.isAnagram("rat", "car") ? "true" : "false";
    cout << "false: " << solution2 << endl;

    return EXIT_SUCCESS;
}

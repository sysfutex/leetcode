#include <cstdlib>
#include <iostream>
#include <vector>

#include "solution.cpp"

using namespace std;

int main() {
    Solution solution;

    vector<string> strs1 = {"flower", "flow", "flight"};
    cout << "fl: " << solution.longestCommonPrefix(strs1) << endl;

    vector<string> strs2 = {"dog", "racecar", "car"};
    cout << "Nothing: " << solution.longestCommonPrefix(strs2) << endl;

    return EXIT_SUCCESS;
}

#include <cstdlib>
#include <iostream>
#include <vector>

#include "solution.cpp"

using namespace std;

int main() {
    Solution solution;

    vector<string> tokens1 = {"2", "1", "+", "3", "*"};
    cout << "9: " << solution.evalRPN(tokens1) << endl;

    vector<string> tokens2 = {"4", "13", "5", "/", "+"};
    cout << "6: " << solution.evalRPN(tokens2) << endl;

    vector<string> tokens3 = {"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};
    cout << "22: " << solution.evalRPN(tokens3) << endl;

    return EXIT_SUCCESS;
}

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

#include "solution.cpp"

using namespace std;

void printVector(vector<string> &v) {
    cout << "[";

    for (int i = 0; i < v.size(); ++i) {
        cout << v[i];

        if (i != v.size() - 1) {
            cout << ", ";
        } else {
            cout << "]";
        }
    }
}

int main() {
    Solution solution;

    vector<string> solution1 = solution.generateParenthesis(1);
    cout << "1. [()]: ";
    printVector(solution1);
    cout << endl;

    vector<string> solution2 = solution.generateParenthesis(2);
    cout << "2. [(()), ()()]: ";
    printVector(solution2);
    cout << endl;

    vector<string> solution3 = solution.generateParenthesis(3);
    cout << "3. [((())), (()()), (())(), ()(()), ()()()]: ";
    printVector(solution3);
    cout << endl;

    return EXIT_SUCCESS;
}

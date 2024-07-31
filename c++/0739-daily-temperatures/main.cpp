#include <cstdlib>
#include <iostream>
#include <vector>

#include "solution.cpp"

using namespace std;

void printVector(vector<int>& v) {
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

    vector<int> temperatures1 = {73, 74, 75, 71, 69, 72, 76, 73};
    vector<int> result1 = solution.dailyTemperatures(temperatures1);
    cout << "[1, 1, 4, 2, 1, 1, 0, 0]: ";
    printVector(result1);
    cout << endl;

    vector<int> temperatures2 = {30, 40, 50, 60};
    vector<int> result2 = solution.dailyTemperatures(temperatures2);
    cout << "[1, 1, 1, 0]: ";
    printVector(result2);
    cout << endl;

    vector<int> temperatures3 = {30, 60, 90};
    vector<int> result3 = solution.dailyTemperatures(temperatures3);
    cout << "[1, 1, 0]: ";
    printVector(result3);
    cout << endl;

    return EXIT_SUCCESS;
}

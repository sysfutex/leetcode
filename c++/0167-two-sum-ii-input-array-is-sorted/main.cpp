#include <cstdlib>
#include <iostream>
#include <vector>

#include "solution.cpp"

using namespace std;

void printVector(vector<int> &v) {
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

    vector<int> numbers1 = {2, 7, 11, 15};
    vector<int> answer1 = solution.twoSum(numbers1, 9);
    cout << "[1, 2]: ";
    printVector(answer1);
    cout << endl;

    vector<int> numbers2 = {2, 3, 4};
    vector<int> answer2 = solution.twoSum(numbers2, 6);
    cout << "[1, 3]: ";
    printVector(answer2);
    cout << endl;

    vector<int> numbers3 = {-1, 0};
    vector<int> answer3 = solution.twoSum(numbers3, -1);
    cout << "[1, 2]: ";
    printVector(answer3);
    cout << endl;

    return EXIT_SUCCESS;
}

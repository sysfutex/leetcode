#include <cstdlib>
#include <iostream>
#include <vector>

#include "solution.cpp"

using namespace std;

int main() {
    Solution solution;

    vector<int> heights1 = {2, 1, 5, 6, 2, 3};
    cout << "10: " << solution.largestRectangleArea(heights1) << endl;

    vector<int> heights2 = {2, 4};
    cout << "4: " << solution.largestRectangleArea(heights2) << endl;

    return EXIT_SUCCESS;
}

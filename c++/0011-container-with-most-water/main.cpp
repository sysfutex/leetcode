#include <cstdlib>
#include <iostream>
#include <vector>

#include "solution.cpp"

using namespace std;

int main() {
    Solution solution;

    vector<int> height1 = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "49: " << solution.maxArea(height1) << endl;

    vector<int> height2 = {1, 1};
    cout << "1: " << solution.maxArea(height2) << endl;

    return EXIT_SUCCESS;
}

#include <cstdlib>
#include <iostream>
#include <vector>

#include "solution.cpp"

using namespace std;

int main() {
    Solution solution;

    vector<int> position1 = {10, 8, 0, 5, 3};
    vector<int> speed1 = {2, 4, 1, 1, 3};
    cout << "3: " << solution.carFleet(12, position1, speed1) << endl;

    vector<int> position2 = {3};
    vector<int> speed2 = {3};
    cout << "1: " << solution.carFleet(10, position2, speed2) << endl;

    vector<int> position3 = {0, 2, 4};
    vector<int> speed3 = {4, 2, 1};
    cout << "1: " << solution.carFleet(100, position3, speed3) << endl;

    return EXIT_SUCCESS;
}

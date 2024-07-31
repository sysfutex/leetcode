#include <cstdlib>
#include <iostream>

#include "solution.cpp"

using namespace std;

int main() {
    Solution solution;

    cout << "3: " << solution.romanToInt("III") << endl;
    cout << "58: " << solution.romanToInt("LVIII") << endl;
    cout << "1994: " << solution.romanToInt("MCMXCIV") << endl;

    return EXIT_SUCCESS;
}

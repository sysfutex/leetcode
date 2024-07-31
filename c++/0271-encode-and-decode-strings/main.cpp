#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

#include "solution.cpp"

using namespace std;

void printVector(vector<string>& v) {
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i];

        if (i != v.size() - 1) {
            cout << ", ";
        }
    }
}

int main() {
    Solution solution;

    vector<string> strs1 = {"Hello", "World"};
    string encoded1 = solution.encode(strs1);
    vector<string> decoded1 = solution.decode(encoded1);
    cout << "1. Encoded: " << encoded1 << endl;
    cout << "1. Decoded: ";
    printVector(decoded1);
    cout << "\n\n";

    vector<string> strs2 = {" "};
    string encoded2 = solution.encode(strs2);
    vector<string> decoded2 = solution.decode(encoded2);
    cout << "2. Encoded: " << encoded2 << endl;
    cout << "2. Decoded: ";
    printVector(decoded2);
    cout << "\n\n";

    vector<string> strs3 = {""};
    string encoded3 = solution.encode(strs3);
    vector<string> decoded3 = solution.decode(encoded3);
    cout << "3. Encoded: " << encoded3 << endl;
    cout << "3. Decoded: ";
    printVector(decoded3);
    cout << "\n\n";

    vector<string> strs4;
    string encoded4 = solution.encode(strs4);
    vector<string> decoded4 = solution.decode(encoded4);
    cout << "4. Encoded: " << encoded4 << endl;
    cout << "4. Decoded: ";
    printVector(decoded4);
    cout << "\n\n";

    return EXIT_SUCCESS;
}

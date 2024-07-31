#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string encode(vector<string>& strs) {
        string result = "";

        for (string s : strs) {
            result += to_string(s.length()) + ' ' + s;
        }

        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;

        int i = 0;
        while (i < s.length()) {
            int j = i;
            while (s[j] != ' ') {
                ++j;
            }

            int length = stoi(s.substr(i, j - i));
            string str = s.substr(j + 1, length);
            result.push_back(str);

            i = j + 1 + length;
        }

        return result;
    }
};

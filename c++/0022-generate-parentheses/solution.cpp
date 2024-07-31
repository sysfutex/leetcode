#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        add(n, 0, 0, "", result);
        return result;
    }

private:
    void add(int n, int open, int close, string current, vector<string> &result) {
        if (n == open && open == close) {
            result.push_back(current);

            return;
        }

        if (n > open) {
            add(n, open + 1, close, current + '(', result);
        }

        if (open > close) {
            add(n, open, close + 1, current + ')', result);
        }
    }
};

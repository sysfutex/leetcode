#include <stack>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;

        int first, second;

        for (int i = 0; i < tokens.size(); ++i) {
            if (tokens[i] == "+") {
                second = s.top();
                s.pop();

                first = s.top();
                s.pop();

                s.push(first + second);
            } else if (tokens[i] == "-") {
                second = s.top();
                s.pop();

                first = s.top();
                s.pop();

                s.push(first - second);
            } else if (tokens[i] == "*") {
                second = s.top();
                s.pop();

                first = s.top();
                s.pop();

                s.push(first * second);
            } else if (tokens[i] == "/") {
                second = s.top();
                s.pop();

                first = s.top();
                s.pop();

                s.push(first / second);
            } else {
                s.push(stoi(tokens[i]));
            }
        }

        return s.top();
    }
};

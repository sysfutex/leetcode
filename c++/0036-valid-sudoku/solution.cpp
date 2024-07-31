#include <vector>

using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool rows[9 /* number of rows */][9 /* number of digits */] = {false};
        bool columns[9 /* number of columns */][9 /* number of digits */] = {false};
        bool blocks[9 /* number of blocks */][9 /* number of digits */] = {false};

        for (int r = 0; r < 9; ++r) {
            for (int c = 0; c < 9; ++c) {
                if (board[r][c] == '.') {
                    continue;
                }

                int digit = board[r][c] - '1';
                int blockNumber = (r / 3) * 3 + (c / 3);

                if (rows[r][digit] || columns[c][digit] || blocks[blockNumber][digit]) {
                    return false;
                }

                rows[r][digit] = true;
                columns[c][digit] = true;
                blocks[blockNumber][digit] = true;
            }
        }

        return true;
    }
};

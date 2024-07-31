import java.util.HashSet;
import java.util.Set;

public class Solution {
    public boolean isValidSudoku(char[][] board) {
        Set<Character> row;
        Set<Character> column;

        for (int i = 0; i < 9; ++i) {
            row = new HashSet<>();
            column = new HashSet<>();

            for (int j = 0; j < 9; ++j) {
                char rowItem = board[i][j];

                if (rowItem != '.') {
                    if (row.contains(rowItem)) {
                        return false;
                    }

                    row.add(rowItem);
                }

                char columnItem = board[j][i];

                if (columnItem != '.') {
                    if (column.contains(columnItem)) {
                        return false;
                    }

                    column.add(columnItem);
                }
            }
        }

        for (int i = 0; i < 9; i += 3) {
            for (int j = 0; j < 9; j += 3) {
                if (!isValidBlock(i, j, board)) {
                    return false;
                }
            }
        }

        return true;
    }

    private boolean isValidBlock(int blockStartRow, int blockStartColumn, char[][] board) {
        Set<Character> block = new HashSet<>();

        int blockEndRow = blockStartRow + 2;
        int blockEndColumn = blockStartColumn + 2;

        for (int r = blockStartRow; r <= blockEndRow; ++r) {
            for (int c = blockStartColumn; c <= blockEndColumn; ++c) {
                if (board[r][c] == '.') {
                    continue;
                }

                if (block.contains(board[r][c])) {
                    return false;
                }

                block.add(board[r][c]);
            }
        }

        return true;
    }
}

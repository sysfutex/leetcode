import java.util.ArrayList;
import java.util.List;

public class Solution {
    public List<String> generateParenthesis(int n) {
        List<String> result = new ArrayList<>();
        add(n, 0, 0, "", result);
        return result;
    }

    private void add(int n, int open, int close, String current, List<String> reuslt) {
        if (n == open && open == close) {
            reuslt.add(current);

            return;
        }

        if (n > open) {
            add(n, open + 1, close, current + '(', reuslt);
        }

        if (open > close) {
            add(n, open, close + 1, current + ')', reuslt);
        }
    }
}

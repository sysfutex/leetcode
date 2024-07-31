import java.util.Arrays;

public class Solution {
    public String longestCommonPrefix(String[] strs) {
        Arrays.sort(strs);
        String first = strs[0];
        String last = strs[strs.length - 1];

        int pos = 0;
        while (pos < first.length()) {
            if (first.charAt(pos) != last.charAt(pos)) {
                break;
            }

            ++pos;
        }

        return first.substring(0, pos);
    }
}

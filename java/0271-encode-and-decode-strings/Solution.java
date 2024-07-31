import java.util.ArrayList;
import java.util.List;

public class Solution {
    public String encode(List<String> strs) {
        StringBuilder result = new StringBuilder();

        for (String s : strs) {
            result.append(Integer.toString(s.length())).append(' ').append(s);
        }

        return result.toString();
    }

    public List<String> decode(String s) {
        List<String> result = new ArrayList<>();

        int i = 0;
        while (i < s.length()) {
            int j = i;
            while (s.charAt(j) != ' ') {
                ++j;
            }

            int length = Integer.parseInt(s.substring(i, j));
            i = j + 1 + length;
            result.add(s.substring(j + 1, i));
        }

        return result;
    }
}

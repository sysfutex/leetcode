import java.util.ArrayList;
import java.util.List;

public class Solution2 {
    public List<Integer> findAnagrams(String s, String p) {
        int pLength = p.length();
        int sLenght = s.length();
        if (sLenght < pLength) {
            return new ArrayList<>();
        }

        int[] counts = new int[26];
        for (int i = 0; i < pLength; ++i) {
            ++counts[p.charAt(i) - 'a'];
        }

        List<Integer> result = new ArrayList<>();

        int required = pLength;
        for (int left = 0, right = 0; right < sLenght; ++right) {
            if (--counts[s.charAt(right) - 'a'] >= 0) {
                --required;
            }

            while (required == 0) {
                if (right - left + 1 == pLength) {
                    result.add(left);
                }

                if (++counts[s.charAt(left++) - 'a'] > 0) {
                    ++required;
                }
            }
        }

        return result;
    }
}

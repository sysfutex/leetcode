import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Solution1 {
    public List<Integer> findAnagrams(String s, String p) {
        if (s.length() < p.length()) {
            return new ArrayList<>();
        }

        int[] pCounts = new int[26];
        for (char c : p.toCharArray()) {
            ++pCounts[c - 'a'];
        }

        List<Integer> result = new ArrayList<>();

        int[] sCounts = new int[26];
        for (int i = 0; i <= s.length() - p.length(); ++i) {
            for (int j = i; j < i + p.length(); ++j) {
                ++sCounts[s.charAt(j) - 'a'];
            }

            if (Arrays.equals(sCounts, pCounts)) {
                result.add(i);
            }

            Arrays.fill(sCounts, 0);
        }

        return result;
    }
}

import java.util.HashSet;
import java.util.Set;

public class Solution {
    public int longestConsecutive(int[] nums) {
        if (nums.length == 0) {
            return 0;
        }

        Set<Integer> set = new HashSet<>();
        for (int n : nums) {
            set.add(n);
        }

        int longest = 1;
        for (int n : nums) {
            if (!set.contains(n - 1)) {
                int count = 1;

                while (set.contains(n + 1)) {
                    ++n;
                    ++count;
                }

                longest = Math.max(count, longest);
            }

            if (longest > nums.length / 2) {
                break;
            }
        }

        return longest;
    }
}

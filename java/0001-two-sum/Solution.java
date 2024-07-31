import java.util.HashMap;
import java.util.Map;

public class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> diffIdx = new HashMap<>();

        for (int i = 0; i < nums.length; ++i) {
            if (diffIdx.containsKey(nums[i])) {
                return new int[] { i, diffIdx.get(nums[i]) };
            } else {
                diffIdx.put(target - nums[i], i);
            }
        }

        return null;
    }
}

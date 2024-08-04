import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        Arrays.sort(nums);

        List<List<Integer>> results = new ArrayList<>();

        for (int i = 0; i < nums.length - 2; ++i) {
            if (i == 0 || (i > 0 && nums[i - 1] != nums[i])) {
                int target = 0 - nums[i];
                int left = i + 1, right = nums.length - 1;

                while (left < right) {
                    if (nums[left] + nums[right] == target) {
                        results.add(List.of(nums[i], nums[left], nums[right]));

                        while (left < right && nums[left] == nums[left + 1]) {
                            ++left;
                        }

                        while (left < right && nums[right] == nums[right - 1]) {
                            --right;
                        }

                        ++left;
                        --right;
                    } else if (nums[left] + nums[right] > target) {
                        --right;
                    } else {
                        ++left;
                    }
                }
            }
        }

        return results;
    }
}

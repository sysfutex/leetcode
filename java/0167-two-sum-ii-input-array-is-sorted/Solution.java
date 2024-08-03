public class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int length = numbers.length;
        if (length == 2) {
            return new int[] { 1, 2 };
        }

        int left = 0, right = length - 1;
        int sum = numbers[left] + numbers[right];
        while (sum != target) {
            if (sum < target) {
                ++left;
            }

            if (sum > target) {
                --right;
            }

            sum = numbers[left] + numbers[right];
        }

        return new int[] { left + 1, right + 1 };
    }
}

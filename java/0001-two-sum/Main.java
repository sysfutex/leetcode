import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Solution solution = new Solution();

        int[] nums1 = new int[] { 2, 7, 11, 15 };
        int target1 = 9;
        System.out.println("[0, 1]: " + Arrays.toString(solution.twoSum(nums1, target1)));

        int[] nums2 = new int[] { 3, 2, 4 };
        int target2 = 6;
        System.out.println("[1, 2]: " + Arrays.toString(solution.twoSum(nums2, target2)));

        int[] nums3 = new int[] { 3, 3 };
        int target3 = 6;
        System.out.println("[0, 1]: " + Arrays.toString(solution.twoSum(nums3, target3)));
    }
}

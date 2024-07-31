import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Solution solution = new Solution();

        int[] nums1 = new int[] { 1, 2, 3, 4 };
        System.out.println("[24, 12, 8, 6]: " + Arrays.toString(solution.productExceptSelf(nums1)));

        int[] nums2 = new int[] { -1, 1, 0, -3, 3 };
        System.out.println("[0, 0, 9, 0, 0]: " + Arrays.toString(solution.productExceptSelf(nums2)));
    }
}

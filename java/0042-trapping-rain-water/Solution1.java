// O(n) memory solution
public class Solution1 {
    public int trap(int[] height) {
        int length = height.length;

        int maxLeft[] = new int[length];
        int maxRight[] = new int[length];
        int result = 0;

        int max = height[0];
        for (int i = 0; i < length; ++i) {
            maxLeft[i] = Math.max(height[i], max);
            max = maxLeft[i];
        }

        max = height[length - 1];
        for (int i = length - 1; i >= 0; --i) {
            maxRight[i] = Math.max(height[i], max);
            max = maxRight[i];
        }

        for (int i = 0; i < length; ++i) {
            result += Math.min(maxLeft[i], maxRight[i]) - height[i];
        }

        return result;
    }
}

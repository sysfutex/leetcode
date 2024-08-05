// O(1) memory solution
public class Solution2 {
    public int trap(int[] height) {
        int left = 0, right = height.length - 1;
        int maxLeft = height[left], maxRight = height[right];
        int result = 0;

        while (left < right) {
            if (maxLeft < maxRight) {
                ++left;
                maxLeft = Math.max(maxLeft, height[left]);
                result += maxLeft - height[left];
            } else {
                --right;
                maxRight = Math.max(maxRight, height[right]);
                result += maxRight - height[right];
            }
        }

        return result;
    }
}

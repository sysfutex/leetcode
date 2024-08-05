public class Solution {
    public int maxArea(int[] height) {
        int n = height.length;
        if (n == 2) {
            return Math.min(height[0], height[1]);
        }

        int left = 0, right = n - 1;
        int maxArea = 0;

        while (left < right) {
            maxArea = Math.max(maxArea, (right - left) * Math.min(height[left], height[right]));

            if (height[left] < height[right]) {
                ++left;
            } else {
                --right;
            }
        }

        return maxArea;
    }
}

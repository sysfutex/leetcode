import java.util.Stack;

public class Solution {
    private record IndexHeight(int index, int height) {
    }

    public int largestRectangleArea(int[] heights) {
        int histogramLength = heights.length;
        if (histogramLength == 1) {
            return heights[0];
        }

        Stack<IndexHeight> stack = new Stack<>();
        int largest = Integer.MIN_VALUE;

        for (int i = 0; i < histogramLength; ++i) {
            int startIndex = i;
            int currentHeight = heights[i];

            while (!stack.isEmpty() && stack.peek().height() > currentHeight) {
                IndexHeight indexHeight = stack.pop();
                int index = indexHeight.index();
                int height = indexHeight.height();

                largest = Math.max(largest, height * (i - index));
                startIndex = index;
            }

            stack.push(new IndexHeight(startIndex, currentHeight));
        }

        while (!stack.isEmpty()) {
            IndexHeight indexHeight = stack.pop();
            int index = indexHeight.index();
            int height = indexHeight.height();

            largest = Math.max(largest, height * (histogramLength - index));
        }

        return largest;
    }
}

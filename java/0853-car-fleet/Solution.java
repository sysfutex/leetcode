import java.util.Arrays;
import java.util.Comparator;
import java.util.Stack;

public class Solution {
    public int carFleet(int target, int[] position, int[] speed) {
        int length = position.length;

        if (length == 1) {
            return 1;
        }

        int[][] cars = new int[length][2];
        for (int i = 0; i < length; ++i) {
            cars[i][0] = position[i];
            cars[i][1] = speed[i];
        }
        Arrays.sort(cars, Comparator.comparingInt(i -> i[0]));

        Stack<Double> stack = new Stack<>();
        for (int i = length - 1; i >= 0; --i) {
            double time = (double) (target - cars[i][0]) / cars[i][1];

            if (!stack.isEmpty() && time <= stack.peek()) {
                continue;
            } else {
                stack.push(time);
            }
        }

        return stack.size();
    }
}

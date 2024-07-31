import java.util.Stack;

public class Solution {
    public int[] dailyTemperatures(int[] temperatures) {
        int[] result = new int[temperatures.length];

        Stack<Integer> days = new Stack<>();
        for (int currentDay = 0; currentDay < temperatures.length; ++currentDay) {
            while (!days.isEmpty() && temperatures[currentDay] > temperatures[days.peek()]) {
                int previousDay = days.pop();
                result[previousDay] = currentDay - previousDay;
            }

            days.add(currentDay);
        }

        return result;
    }
}

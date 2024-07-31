import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Solution solution = new Solution();

        String answer1 = "[1, 1, 4, 2, 1, 1, 0, 0]";
        int[] solution1 = solution.dailyTemperatures(new int[] { 73, 74, 75, 71, 69, 72, 76, 73 });
        System.out.println(answer1 + ": " + Arrays.toString(solution1));

        String answer2 = "[1, 1, 1, 0]";
        int[] solution2 = solution.dailyTemperatures(new int[] { 30, 40, 50, 60 });
        System.out.println(answer2 + ": " + Arrays.toString(solution2));

        String answer3 = "[1, 1, 0]";
        int[] solution3 = solution.dailyTemperatures(new int[] { 30, 60, 90 });
        System.out.println(answer3 + ": " + Arrays.toString(solution3));
    }
}

import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Solution solution = new Solution();

        System.out.println("[1, 2]: " + Arrays.toString(solution.twoSum(new int[] { 2, 7, 11, 15 }, 9)));
        System.out.println("[1, 3]: " + Arrays.toString(solution.twoSum(new int[] { 2, 3, 4 }, 6)));
        System.out.println("[1, 2]: " + Arrays.toString(solution.twoSum(new int[] { -1, 0 }, -1)));
    }
}

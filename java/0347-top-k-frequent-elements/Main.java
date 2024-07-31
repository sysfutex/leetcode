import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Solution solution = new Solution();

        System.out.println("[1, 2]: " + Arrays.toString(solution.topKFrequent(new int[] { 1, 1, 1, 2, 2, 3 }, 2)));
        System.out.println("[1]: " + Arrays.toString(solution.topKFrequent(new int[] { 1 }, 1)));
    }
}

public class Main {
    public static void main(String[] args) {
        Solution solution = new Solution();

        System.out.println("[[-1, -1, 2], [-1, 0, 1]]: " + solution.threeSum(new int[] { -1, 0, 1, 2, -1, -4 }));
        System.out.println("[]: " + solution.threeSum(new int[] { 0, 1, 1 }));
        System.out.println("[[0, 0, 0]]: " + solution.threeSum(new int[] { 0, 0, 0 }));
    }
}

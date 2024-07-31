public class Main {
    public static void main(String[] args) {
        Solution solution = new Solution();

        System.out.println("fl: " + solution.longestCommonPrefix(new String[] { "flower", "flow", "flight" }));
        System.out.println("Nothing: " + solution.longestCommonPrefix(new String[] { "dog", "racecar", "car" }));
    }
}

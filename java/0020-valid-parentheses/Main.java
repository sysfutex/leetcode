public class Main {
    public static void main(String[] args) {
        Solution solution = new Solution();

        System.out.println("true: " + solution.isValid("()"));
        System.out.println("true: " + solution.isValid("()[]{}"));
        System.out.println("false: " + solution.isValid("(]"));
    }
}

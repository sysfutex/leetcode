public class Main {
    public static void main(String[] args) {
        Solution solution = new Solution();

        System.out.println("9: " + solution.evalRPN(new String[] { "2", "1", "+", "3", "*" }));
        System.out.println("6: " + solution.evalRPN(new String[] { "4", "13", "5", "/", "+" }));
        System.out.println("22: " + solution.evalRPN(new String[] { "10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+" }));
    }
}

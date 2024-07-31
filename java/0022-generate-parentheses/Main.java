public class Main {
    public static void main(String[] args) {
        Solution solution = new Solution();

        System.out.println("1. [()]: " + solution.generateParenthesis(1));
        System.out.println("2. [(()), ()()]: " + solution.generateParenthesis(2));
        System.out.println("3. [((())), (()()), (())(), ()(()), ()()()]: " + solution.generateParenthesis(3));
    }
}

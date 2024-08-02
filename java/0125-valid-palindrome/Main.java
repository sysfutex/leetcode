public class Main {
    public static void main(String[] args) {
        Solution solution = new Solution();

        System.out.println("true: " + solution.isPalindrome("A man, a plan, a canal: Panama"));
        System.out.println("false: " + solution.isPalindrome("race a car"));
        System.out.println("true: " + solution.isPalindrome(" "));
    }
}

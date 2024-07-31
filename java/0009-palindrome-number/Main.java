public class Main {
    public static void main(String[] args) {
        Solution solution = new Solution();

        System.out.println("true: " + solution.isPalindrome(121));
        System.out.println("false: " + solution.isPalindrome(-121));
        System.out.println("false: " + solution.isPalindrome(10));
    }
}

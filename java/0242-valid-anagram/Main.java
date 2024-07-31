public class Main {
    public static void main(String[] args) {
        Solution solution = new Solution();

        System.out.println("true: " + solution.isAnagram("anagram", "nagaram"));
        System.out.println("false: " + solution.isAnagram("rat", "car"));
    }
}

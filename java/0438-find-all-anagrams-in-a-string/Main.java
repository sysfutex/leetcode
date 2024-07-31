public class Main {
    public static void main(String[] args) {
        Solution1 solution1 = new Solution1();
        System.out.println("Solution 1: [0, 6]: " + solution1.findAnagrams("cbaebabacd", "abc"));
        System.out.println("Solution 1: [0, 1, 2]: " + solution1.findAnagrams("abab", "ab"));
        System.out.println("Solution 1: [1]: " + solution1.findAnagrams("baa", "aa"));
        System.out.println();

        Solution2 solution2 = new Solution2();
        System.out.println("Solution 2: [0, 6]: " + solution2.findAnagrams("cbaebabacd", "abc"));
        System.out.println("Solution 2: [0, 1, 2]: " + solution2.findAnagrams("abab", "ab"));
        System.out.println("Solution 2: [1]: " + solution2.findAnagrams("baa", "aa"));
    }
}

public class Main {
    public static void main(String[] args) {
        Solution solution = new Solution();

        String ans1 = "[[bat], [nat, tan],[ate, eat, tea]]";
        String[] strs1 = new String[] { "eat", "tea", "tan", "ate", "nat", "bat" };
        System.out.println(ans1 + ": " + solution.groupAnagrams(strs1));

        String ans2 = "[[]]";
        String[] strs2 = new String[] { "" };
        System.out.println(ans2 + ": " + solution.groupAnagrams(strs2));

        String ans3 = "[[a]]";
        String[] strs3 = new String[] { "a" };
        System.out.println(ans3 + ": " + solution.groupAnagrams(strs3));
    }
}

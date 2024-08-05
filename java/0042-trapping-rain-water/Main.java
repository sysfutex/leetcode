public class Main {
    public static void main(String[] args) {
        Solution1 solution1 = new Solution1();
        System.out.println("Solution #1 | 6: " + solution1.trap(new int[] { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 }));
        System.out.println("Solution #1 | 9: " + solution1.trap(new int[] { 4, 2, 0, 3, 2, 5 }));
        System.out.println();

        Solution2 solution2 = new Solution2();
        System.out.println("Solution #2 | 6: " + solution2.trap(new int[] { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 }));
        System.out.println("Solution #2 | 9: " + solution2.trap(new int[] { 4, 2, 0, 3, 2, 5 }));
    }
}

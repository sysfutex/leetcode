public class Main {
    public static void main(String[] args) {
        Solution solution = new Solution();

        System.out.println("true: " + solution.containsDuplicate(new int[] { 1, 2, 3, 1 }));
        System.out.println("false: " + solution.containsDuplicate(new int[] { 1, 2, 3, 4 }));
        System.out.println("true: " + solution.containsDuplicate(new int[] { 1, 1, 1, 3, 3, 4, 3, 2, 4, 2 }));
    }
}

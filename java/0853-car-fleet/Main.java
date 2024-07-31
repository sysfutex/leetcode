public class Main {
    public static void main(String[] args) {
        Solution solution = new Solution();

        System.out.println("3: " + solution.carFleet(12, new int[] { 10, 8, 0, 5, 3 }, new int[] { 2, 4, 1, 1, 3 }));
        System.out.println("1: " + solution.carFleet(10, new int[] { 3 }, new int[] { 3 }));
        System.out.println("1: " + solution.carFleet(100, new int[] { 0, 2, 4 }, new int[] { 4, 2, 1 }));
    }
}

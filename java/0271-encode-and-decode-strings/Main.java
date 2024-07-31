import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        Solution solution = new Solution();

        List<String> strs1 = List.of("Hello", "World");
        System.out.println("1. Encoded: " + solution.encode(strs1));
        System.out.println("1. Decoded: " + solution.decode(solution.encode(strs1)) + "\n");

        List<String> strs2 = List.of(" ");
        System.out.println("2. Encoded: " + solution.encode(strs2));
        System.out.println("2. Decoded: " + solution.decode(solution.encode(strs2)) + "\n");

        List<String> strs3 = List.of("");
        System.out.println("3. Encoded: " + solution.encode(strs3));
        System.out.println("3. Decoded: " + solution.decode(solution.encode(strs3)) + "\n");

        List<String> strs4 = new ArrayList<>();
        System.out.println("4. Encoded: " + solution.encode(strs4));
        System.out.println("4. Decoded: " + solution.decode(solution.encode(strs4)) + "\n");
    }
}

import java.util.Stack;

public class Solution {
    public int evalRPN(String[] tokens) {
        Stack<Integer> stack = new Stack<>();

        int second;

        for (String token : tokens) {
            if (token.equals("+")) {
                stack.push(stack.pop() + stack.pop());
            } else if (token.equals("-")) {
                second = stack.pop();
                stack.push(stack.pop() - second);
            } else if (token.equals("*")) {
                stack.push(stack.pop() * stack.pop());
            } else if (token.equals("/")) {
                second = stack.pop();
                stack.push(stack.pop() / second);
            } else {
                stack.push(Integer.parseInt(token));
            }
        }

        return stack.pop();
    }
}
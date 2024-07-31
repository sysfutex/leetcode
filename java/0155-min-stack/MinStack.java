import java.util.Stack;

public class MinStack {
    private final Stack<Integer> stack = new Stack<>();
    private final Stack<Integer> minStack = new Stack<>();

    public MinStack() {
    }

    public void push(int val) {
        stack.push(val);
        minStack.push(minStack.isEmpty() ? val : Math.min(val, minStack.peek()));
    }

    public void pop() {
        stack.pop();
        minStack.pop();
    }

    public int top() {
        return stack.peek();
    }

    public int getMin() {
        return minStack.peek();
    }
}

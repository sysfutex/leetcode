public class Main {
    public static void main(String[] args) {
        MinStack minStack = new MinStack();
        minStack.push(-2);
        minStack.push(0);
        minStack.push(-3);
        System.out.println("-3: " + minStack.getMin());
        minStack.pop();
        System.out.println("0: " + minStack.top());
        System.out.println("-2: " + minStack.getMin());
    }
}

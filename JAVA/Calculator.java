import java.util.*;

public class Calculator {
    public static int add(int x, int y) {
        int d = x + y;
        return d;
    }

    public static int multiply(int x, int y) {
        int e = x * y;
        return e;
    }

    public static int subtract(int x, int y) {
        int f = x - y;
        return f;
    }

    public static void main(String[] args) {
        int a, b;
        Scanner in = new Scanner(System.in);
        System.out.print("Enter 1 integer:");
        a = in.nextInt();
        System.out.print("Enter 1 integer:");
        b = in.nextInt();
        add(a, b);
        subtract(a, b);
        multiply(a, b);
        System.out.println("The sum is:" + add(a, b));
        System.out.println("The subtraction is:" + subtract(a, b));
        System.out.println("The multiple is:" + multiply(a, b));
    }
}
//Code By Rudra
import java.util.*;

public class Phone {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 1st three digit of your phone number");
        long y = sc.nextLong();
        System.out.println("Enter next three digit of your phonr number");
        long x = sc.nextLong();
        System.out.println("Enter last four digit of your phonr number");
        long n = sc.nextLong();
        long p = y * 40;
        long z = p * 25;
        long m = z + x;
        long a = m * 50;
        long c = a + 1;
        long d = c * 400;
        long w = d + n;
        long g = w + n;
        System.out.println(+g);
    }
}
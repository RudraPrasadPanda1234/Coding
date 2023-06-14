import java.util.Scanner;

public class name {
    public static void main(String args[]) {
        int c;
        Scanner in = new Scanner(System.in);
        System.out.println("enter a number");
        c = in.nextInt();
        if (c % 2 == 0)
            System.out.println("is an even number");
        else
            System.out.println("is an odd number");
    }
}
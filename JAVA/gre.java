
//WAP to find largest of 3 numbers
import java.util.*;

public class gre {
    public static void main(String[] args) {
        int a, b, c;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter 3 numbers ");
        a = in.nextInt();
        b = in.nextInt();
        c = in.nextInt();
        if (a > b && a > c)
            System.out.println(a + " is greatest among " + a + "," + b + "," + c);
        else if (b > a && b > c)
            System.out.println(b + " is greastet among " + a + "," + b + "," + c);
        else
            System.out.println(c + "is greatset among " + a + "," + b + "," + c);
    }
}
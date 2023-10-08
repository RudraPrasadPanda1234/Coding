
//WAP to print fibonaaci series using loop
import java.util.*;

public class fibonacci {
    public static void main(String args[]) {
        int n1 = 0, n2 = 1, n3, i, n = 10;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the number upto which u want fibanaci series");
        n = in.nextInt();
        System.out.print(n1 + " " + n2);

        for (i = 2; i <= n; ++i) {
            n3 = n1 + n2;
            System.out.print(" " + n3);
            n1 = n2;
            n2 = n3;
        }
        in.close();
    }
}

//WAP to display ("Hello","Welcome to Java World","A very good morning")
import java.util.*;

public class add {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter two number two to perfom addition:");
        int a = in.nextInt();
        int b = in.nextInt();
        String f = displaystatement();
        int e = addnumbers(a, b);
        System.out.println("The sum of " + a + " and " + b + " is:" + e);
        System.out.println(f);
    }

    public static int addnumbers(int a, int b) {
        int c = a + b;
        return c;
    }

    public static String displaystatement() {
        String str = "\"Hello\",\"Welcome to java world\",\"A very good morning\"";
        return str;
    }
}
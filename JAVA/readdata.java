import java.util.*;

public class readdata {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        // Read an int value
        System.out.println("Enter a integer:");
        int intVal = in.nextInt();

        // Read a string value
        System.out.println("Enter a string:");
        String stringVal = in.next();

        // Read a double value
        System.out.println("Enter a double/float value:");
        double doubleVal = in.nextDouble();

        // Print the values
        System.out.println("intVal: " + intVal);
        System.out.println("stringVal: " + stringVal);
        System.out.println("doubleVal: " + doubleVal);
        in.close();
    }
}

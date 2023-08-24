import java.util.Scanner;

public class avg {
    public static void main(String[] args) {
        String name;
        String student_id;
        double sub_1, sub_2, sub_3;
        // avg ob=new avg();
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the student name:");
        name = in.nextLine();
        System.out.println("Enter the student id:");
        student_id = in.nextLine();
        System.out.println("Enter the 3 subject marks");
        sub_1 = in.nextDouble();
        sub_2 = in.nextDouble();
        sub_3 = in.nextDouble();
        avg_mark(sub_1, sub_2, sub_3);
        System.out.println("The student id is:" + student_id);
        System.out.println("The student name is:" + name);
        in.close();
    }

    static void avg_mark(double sub_1, double sub_2, double sub_3) {
        double avg = 0;
        avg = (sub_1 + sub_2 + sub_3) / 3;
        System.out.println("The avg is:" + avg);
    }
}
// Code By Rudra
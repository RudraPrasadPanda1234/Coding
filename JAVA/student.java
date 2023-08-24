import java.util.*;

class avg_mark {
    String name;
    String student_id;
    double sub_1, sub_2, sub_3, avg;

    void input() {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter student id");
        student_id = in.nextLine();
        System.out.println("Enter the student name");
        name = in.nextLine();
        System.out.println("Enter the 3 sub mark");
        sub_1 = in.nextDouble();
        sub_2 = in.nextDouble();
        sub_3 = in.nextDouble();
        in.close();
    }

    void calculate() {
        avg = (sub_1 + sub_2 + sub_3) / 3;
    }

    void display() {
        System.out.println("The student id is:" + student_id);
        System.out.println("The name is :" + name);
        System.out.println("The avg mark=" + avg);
    }
}

public class student {
    public static void main(String[] args) {
        avg_mark ob = new avg_mark();
        ob.input();
        ob.calculate();
        ob.display();
    }
}
// Code By Rudra
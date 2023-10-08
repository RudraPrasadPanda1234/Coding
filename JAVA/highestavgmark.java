import java.util.Scanner;

public class highestavgmark {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String highestAverageStudentName = "";
        int highestAverageStudentRollNo = 0;
        double highestAverage = -1;

        for (int i = 1; i <= 5; i++) {
            System.out.println("Enter details for Student " + i + ":");
            System.out.print("Name: ");
            String name = scanner.nextLine();
            System.out.print("Roll No: ");
            int rollNo = scanner.nextInt();
            System.out.print("Marks for Subject 1: ");
            double sub1 = scanner.nextDouble();
            System.out.print("Marks for Subject 2: ");
            double sub2 = scanner.nextDouble();
            System.out.print("Marks for Subject 3: ");
            double sub3 = scanner.nextDouble();
            System.out.print("Marks for Subject 4: ");
            double sub4 = scanner.nextDouble();
            System.out.print("Marks for Subject 5: ");
            double sub5 = scanner.nextDouble();
            double averageMarks = (sub1 + sub2 + sub3 + sub4 + sub5) / 5.0;
            if (averageMarks > highestAverage) {
                highestAverage = averageMarks;
                highestAverageStudentName = name;
                highestAverageStudentRollNo = rollNo;
            }
            scanner.nextLine();
        }
        System.out.println("\nStudent with the highest average marks:");
        System.out.println("Name: " + highestAverageStudentName);
        System.out.println("Roll No: " + highestAverageStudentRollNo);
        System.out.println("Average Marks: " + highestAverage);
        scanner.close();
    }
}
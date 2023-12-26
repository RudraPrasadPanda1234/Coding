import java.util.*;

public class highestavgmark {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String highestAveragestudentname = "";
        int highestAveragestudentrollno = 0;
        double highestaverage = -1;

        for (int i = 1; i <= 5; i++) {
            System.out.println("Enter details for Student " + i + ":");
            System.out.print("Name: ");
            String name = in.nextLine();
            System.out.print("Roll No: ");
            int rollno = in.nextInt();
            System.out.print("Marks for Subject 1: ");
            double sub1 = in.nextDouble();
            System.out.print("Marks for Subject 2: ");
            double sub2 = in.nextDouble();
            System.out.print("Marks for Subject 3: ");
            double sub3 = in.nextDouble();
            System.out.print("Marks for Subject 4: ");
            double sub4 = in.nextDouble();
            System.out.print("Marks for Subject 5: ");
            double sub5 = in.nextDouble();
            double averagemarks = (sub1 + sub2 + sub3 + sub4 + sub5) / 5.0;
            if (averagemarks > highestaverage) {
                highestaverage = averagemarks;
                highestAveragestudentname = name;
                highestAveragestudentrollno= rollno;
            }
            in.nextLine();
        }
        System.out.println("\nStudent with the highest average marks:");
        System.out.println("Name: " + highestAveragestudentname);
        System.out.println("Roll No: " + highestAveragestudentrollno);
        System.out.println("Average Marks: " + highestaverage);
        in.close();
    }
}
//WAP in Java to find the sum of each row and each column of a matrix
import java.util.*;

public class sumrowcol {
    public static void main(String args[]) {
        int[][] a = new int[100][100]; // declartion of array of 100
        Scanner in = new Scanner(System.in); // declartion of scanner class

        // taking input of number of rows and cloumns from user
        System.out.print("Enter the number of elments in rows and columns:");
        int nrows = in.nextInt();
        int ncol = in.nextInt();

        // taking input of number of elments of rows and columns
        System.out.println("Enter the row and column elements:");
        for (int i = 0; i < nrows; i++) {
            for (int j = 0; j < ncol; j++) {
                System.out.print("Enter the " + "[" + (i) + "]" + "[" + (j) + "]" + " element:");
                a[i][j] = in.nextInt();
            }
        }

        // displaying the elements entered
        System.out.println("The numbers entered are as follows");
        for (int i = 0; i < nrows; i++) {
            for (int j = 0; j < ncol; j++) {
                System.out.println("Element " + "[" + (i) + "]" + "[" + (j) + "]" + " is:" + a[i][j]);
            }
        }

        // calculating sum of row
        for (int i = 0; i < nrows; i++) {
            int sumrow = 0;
            for (int j = 0; j < ncol; j++) {
                sumrow += a[i][j];
            }
            System.out.println("Sum of " + (i + 1) + " row is:" + sumrow);
        }

        // calculating sum of column
        for (int i = 0; i < nrows; i++) {
            int sumcol = 0;
            for (int j = 0; j < ncol; j++) {
                sumcol += a[j][i];
            }
            System.out.println("Sum of " + (i + 1) + " column is:" + sumcol);
        }
    }
}
// Code By Rudra
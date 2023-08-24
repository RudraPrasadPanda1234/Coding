import java.util.*;

public class MatrrixMultiplication {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int r1, c1, r2, c2, i, j, k;
        int[][] a = new int[10][10];
        int[][] b = new int[10][10];
        int[][] mul = new int[10][10];

        System.out.println("Enter row and column of first matrix: ");
        r1 = input.nextInt();
        c1 = input.nextInt();
        System.out.println("Enter row and column of second matrix: ");
        r2 = input.nextInt();
        c2 = input.nextInt();

        if (c1 == r2) {

            System.out.println("Enter the elements of the first matrix: ");
            for (i = 0; i < r1; i++) {
                for (j = 0; j < c1; j++) {
                    System.out.print("a[" + i + "][" + j + "]=");
                    a[i][j] = input.nextInt();
                }
            }

            System.out.println("Enter the elements of the second matrix:");
            for (i = 0; i < r2; i++) {
                for (j = 0; j < c2; j++) {
                    System.out.print("b[" + i + "][" + j + "]=");
                    b[i][j] = input.nextInt();
                }
            }

            for (i = 0; i < r1; i++) {
                for (j = 0; j < c2; j++) {
                    mul[i][j] = 0;
                    for (k = 0; k < r2; k++) {
                        mul[i][j] = mul[i][j] + a[i][k] * b[k][j];
                    }
                }
            }

            System.out.println("The Multiplied matrix is: ");
            for (i = 0; i < r1; i++) {
                for (j = 0; j < c2; j++) {
                    System.out.print(mul[i][j] + "\t");
                }
                System.out.println();
            }

        } else {
            System.out.println("Dimension does not match for multiplication");
        }
    }
}
//Code By Rudra
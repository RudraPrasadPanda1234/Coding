//Write a Java program to create and display unique three-digit number using 1, 2, 3, 4. Also count how many three-digit numbers are there.
public class unique {
    public static void main(String[] args) {
        int num = 0, c = 0;
        // Scanner in = new Scanner(System.in);
        for (int i = 1; i <= 4; i++) {
            for (int j = 1; j <= 4; j++) {
                for (int k = 1; k <= 4; k++) {
                    if (i != j && j != k && i != k) {
                        num = i * 100 + j * 10 + k;
                        System.out.print(num + " ");
                        c++;
                    }
                }
            }
        }
        System.out.println(" ");
        System.out.println("There are " + c + " unique numbers.");
    }
}
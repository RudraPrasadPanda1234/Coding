//Write a Java program that calculate mathematical constant "e" using the formula e=1+1/2!+1/3!+........ up to 5 .
public class mathfac {
    public static void main(String[] args) {
        int j;
        long fac;
        double i;
        double sum = 0;
        for (i = 1; i <= 5; i++) {
            fac = 1;
            for (j = 2; j <= i; j++) {
                fac *= j;
            }
            sum = sum + (1.0 / fac);
        }
        System.out.println("The sum is" + sum);
    }
}
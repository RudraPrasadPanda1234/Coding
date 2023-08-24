
//Write a Java program to sort the elements using bubble sort.
import java.util.*;

public class bubblesort {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] array = new int[5];
        System.out.println("Enter 5 elements:");
        for (int i = 0; i < array.length; i++)
            array[i] = in.nextInt();
        System.out.println("Unsorted array:");
        for (int i = 0; i < array.length; i++)
            System.out.print(array[i] + " ");
        bubbleSort(array);
        System.out.println("\nSorted array:");
        for (int i = 0; i < array.length; i++)
            System.out.print(array[i] + " ");
    }

    static void bubbleSort(int[] array) {
        int n = array.length;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (array[j] > array[j + 1]) {
                    int temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }
    }
}
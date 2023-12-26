//Write a java program to find the maximum and minimum value of an array
import java.util.Scanner;
public class maxminvalueofarray
{
    static int m;
    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);
	System.out.println("input size");
	m = in.nextInt();   
        int[] array = new int[30];
        System.out.print("Enter elements:");
        for (int i = 0; i < m; i++) 
            array[i]=in.nextInt();
        bubbleSort(array);
        System.out.println("Minimum elements:"+array[0]);
	System.out.println("Maximum elements:"+ array[m-1]);
    }
    private static void bubbleSort(int[] array) 
    {
        int n = m;
        for (int i = 0; i < n - 1; i++) 
        {
            for (int j = 0; j < n - i - 1; j++) 
            {
                if (array[j] > array[j + 1]) 
                {
                    int temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }
    }
}
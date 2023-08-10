import java.util.*;

public class binarysearch {
    public static int bsearch(int list[], int lb, int ub, int sitem) {
        int mid, pos = -1;
        while (lb <= ub) {
            mid = (lb + ub) / 2;
            if (list[mid] == sitem)
                return (mid +1);
            else if (list[mid] > sitem)
                ub = mid - 1;
            else
                lb = mid + 1;
        }
        return (pos);
    }

    public static void main(String args[]) {
        int sitem, n, i;
        int[] list = new int[100];
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the elemnts ");
        n = in.nextInt();
        System.out.println("Enter the elemnets");
        for (i = 0; i < n; i++)
            list[i] = in.nextInt();
        System.out.println("The items are as follows");
        for (i = 0; i < n; i++)
            System.out.println("list" + "[" + i + "]" + ":" + list[i]);
        System.out.println("Enter the item to search");
        sitem = in.nextInt();
        int b = bsearch(list, 0, n - 1, sitem);
        if (b == -1)
            System.out.println("Element " + sitem + " is not present");
        else
            System.out.println("Element " + sitem + " is present at position" + b);
    }
}
//Code By Rudra
// wap in java to find duplicate value in an array of integer values
import java.util.Scanner;
public class Program3 {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int arr[]=new int[8];
        for(int i=0;i<8;i++) {
            arr[i]=in.nextInt();
        }
        for(int i=0;i<8;i++) {
            for(int j=i+1;j<8;j++) {
                if(arr[i]==arr[j]) {
                    System.out.println("Duplicate Element: "+arr[i]);
                }
            }
        }
        in.close();
    }
}
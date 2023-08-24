public class copyarray {
    public static void main(String[] args) {
        int arr[]= { 1, 2, 3, 4, 5 };
        int arr1[] = new int[arr.length];     //new array to copy elemnts
        
        // Copy the contents of the source array to the destination array
        for (int i = 0; i < arr.length; i++) {
            arr1[i] = arr[i];
        }
        
        // Display the contents of the source array
        System.out.print("Source Array: ");
        for (int i=0;i<arr.length;i++) {
            System.out.print(arr[i]+ " ");
        }
        System.out.println();
        
        // Display the contents of the destination array
        System.out.print("Destination Array: ");
       for (int i=0;i<arr1.length;i++) {
            System.out.print(arr1[i]+ " ");
        }
        System.out.println();
    }
}

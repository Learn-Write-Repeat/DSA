import java.io.*;

class ArrayRotation {
    // Left Rotate method
    public static void printLeftRotated(int arr[], int k) {
        // Create Result Array to store result
        int leftRotate[] = new int[arr.length];

        // Divide and add into result Array
        int i = k;
        int j = 0;
        while (i < arr.length) {
            leftRotate[j++] = arr[i++]; // shift last total-k element to left of Result Array.
        }
        i = 0;
        while (j < leftRotate.length) {
            leftRotate[j++] = arr[i++]; // add first k element to right of Result Array.
        }

        // Print all Left Rotated Elements.
        System.out.print("Left Rotated Array is : ");
        for (int z = 0; z < arr.length; z++) {
            System.out.print(leftRotate[z] + " ");
        }

    }

    // Right Rotate Methode
    public static void printRightRotated(int[] arr, int k) {
        // Create Result Array to store result
        int rightRotate[] = new int[arr.length];

        // Divide and add into result Array
        int i = arr.length - k;
        int j = 0;
        while (i < arr.length) {
            rightRotate[j++] = arr[i++]; // Store last k element to left of Result Array.
        }
        i = 0;
        while (i < arr.length - k) {
            rightRotate[j++] = arr[i++]; // add first total-k element to right of Result Array.
        }

        // Print all Right Rotated Elements.
        System.out.print("Right Rotated Array is : ");
        for (int z = 0; z < arr.length; z++) {
            System.out.print(rightRotate[z] + " ");
        }

    }

    public static void main(String args[]) throws Exception {
        // create bufferedReader class to get input from user
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // Read Array
        System.out.print("Array Element (Seperated by space Like :  3 5 6 ....) : ");
        String str[] = br.readLine().trim().split(" ");

        // return if Array is null
        if (str[0].equals("")) {
            System.out.println("Invalid Array");
            return;
        }

        int arr[] = new int[str.length];

        // convert String array to integer.
        for (int i = 0; i < str.length; i++) {
            arr[i] = Integer.parseInt(str[i]);
        }

        // get value of k to rotate array
        System.out.print("Value of K : ");
        int k = Integer.parseInt(br.readLine().trim());

        // check k is not negative, if yes make +ve
        if (k < 0) {
            k *= -1;
        }

        // check k is not more then Array length, if yes mod it with array length
        // because it's result is same as this
        k %= (arr.length);

        // call both methode to print rotated array
        printLeftRotated(arr, k);
        System.out.println();
        printRightRotated(arr, k);

    }
}
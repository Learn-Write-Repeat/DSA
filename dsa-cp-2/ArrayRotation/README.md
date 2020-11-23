# How to rotate an array left and right by a given number K?

## :worried: What is Array Rotation ??

    Array Roation is nothing but shifting array elements one by one from left to right or right to left.
    eg. : Array is : {1,2,3,4}
          After shifting 1 to right Array look like
          {2,3,4,1}

## Types of Array Rotation

1 . Left

    Shift left side elements to right side of Array

    Eg. : Array is    :  {1,2,3,4}
          Left Rotate :  {2,3,4,1}

2 . Right

    Shift right side elements to left side of Array

    Eg. : Array is     :  {1,2,3,4}
          Right Rotate :  {4,1,2,3}

## Method to Left Rotate Array

For multiple Elements instead of rotating one by one use simple methode.

To rotate K elements to right side from left side do below steps

1.  Devide Array into to part

    I. First part contain first K elements of array.

    II. Second part contain remaining elements of array.

2.  Create new Array to store result.

3.  Now store second part of array into result array.

4.  Last store first part of array.

Eg. :

    Array : {1,2,3,4,5,6} and K = 2

Step 1 : Devide

     part1 = {1,2} and part2 = {3,4,5,6}

Step 2 : Crete new Array

    Result Array = {}

Step 3 : Store second part of array

    Result Array = {3,4,5,6}

Step 4 : Add first part of array

    Result Array = {3,4,5,6,1,2}
    This is left Rotated Array. :smile:

## Method to Right Rotate Array

Same as above.

To rotate K elements to left side from right side do below steps

1.  Devide Array into to part

    I. First part contain first total elements minus last K elements of array.

    II. Second part contain last K elements of array.

2.  Create new Array to store result.

3.  Now store second part of array into result array.

4.  Last store first part of array.

Eg. :

    Array : {1,2,3,4,5,6} and K = 2

Step 1 : Devide

     part1 = {1,2,3,4} and part2 = {5,6}

Step 2 : Crete new Array

    Result Array = {}

Step 3 : Store second part of array

    Result Array = {5,6}

Step 4 : Add first part of array

    Result Array = {5,6,1,2,3,4}
    This is left Rotated Array. :smile:

## Code in JAVA to rotate Array Elements

```Java

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

```

## Time Complexity

    We are just moving N time in left rotation and N more time in right rotation
    So. Time Complexity is O(N+N) = O(N)

## Output Images

### Output with positive K
    
![](https://github.com/RohitsSkill/DSA/blob/main/dsa-cp-2/ArrayRotation/positiveK.png)


### Output with negative K

![](https://github.com/RohitsSkill/DSA/blob/main/dsa-cp-2/ArrayRotation/negativeK.png)

## Created By

Rohit Pawar

Profile links :

> Github : [Rohit Pawar](https://github.com/RohitsSkill "Github")

> LinkedIn : [Rohit Pawar](https://www.linkedin.com/in/rohit-pawar-1a18481b2 "LinkedIn")
